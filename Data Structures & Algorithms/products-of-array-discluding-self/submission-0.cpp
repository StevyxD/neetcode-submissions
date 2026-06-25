class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeros=0;
        for(auto it:nums)if(it==0)zeros++;

        vector<int> ans;

        int multi=1;
        if(zeros==0){
            for(auto it:nums)multi*=it;
        }


        if(zeros==0){
            for(auto it: nums){
                ans.push_back(multi/it);
            }
        }
        else if(zeros==1){
            int multi=1;
            for(auto it:nums)if(it!=0)multi*=it;
            for(auto it: nums){
                if(it==0){
                    ans.push_back(multi);
                }
                else ans.push_back(0);
            }
        }else{
            for(auto it:nums)ans.push_back(0);
        }
        return ans;
    }
};
