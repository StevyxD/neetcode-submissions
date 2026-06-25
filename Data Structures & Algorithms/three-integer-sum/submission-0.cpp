class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int num1=nums[i];
            int l=i+1,r=n-1;
            while(l<r){
                int left=nums[l];
                int right=nums[r];



                if(num1+left+right==0){
                    v.push_back({num1,left,right});
                    while(l<r && nums[l]==nums[l+1])l++;

                    while(l<r && nums[r]==nums[r-1])r--;

                    l++;
                    r--;

                }
                else if(num1+left+right<0) l++;
                else r--;
            }
        }
        return v;
    }
};
