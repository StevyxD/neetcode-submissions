class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> uni;
        for(auto it: nums){
            auto finder=uni.find(it);
            if(finder!=uni.end())return true;
            uni.insert(it);
        }
        return false;
    }
};