class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxVol=0;
        while(l<r){
            int vol=(min(heights[l],heights[r])*(r-l));
            maxVol=max(maxVol,vol);
          
            if(heights[l]<=heights[r])l++;
            else r--;
        }
        return maxVol;
    }
};
