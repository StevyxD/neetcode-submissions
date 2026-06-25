class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=1;
        int maxLen=1;
        if(nums.size()<=1)return nums.size();

        set<int> set1;
        for(auto it:nums){
            set1.insert(it);
        }

        vector<int> v;
        for(auto it: set1){
            v.push_back(it);
        }

        for(int i=1;i<v.size();i++){
            if(v[i]-1==v[i-1]){
                len++;
                maxLen=max(maxLen,len);

            }
            else {
                maxLen=max(maxLen,len);
                len=1;
            }

        }
        return maxLen;
    }
};
