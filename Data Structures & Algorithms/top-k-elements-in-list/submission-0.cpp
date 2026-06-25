class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto it:nums){
            mp[it]+=1;
        }
        
        priority_queue<pair<int,int>> pq;
        for(auto it: mp){
            pq.push({it.second,it.first});
        }
        vector<int> arr;
        while(k--){

            arr.push_back(pq.top().second);
            pq.pop();
        }
        return arr;
    }
};
