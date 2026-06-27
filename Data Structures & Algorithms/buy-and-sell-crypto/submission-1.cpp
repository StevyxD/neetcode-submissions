class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=prices[0];
        int maxProfit=0;
        int profit;
        for(int i=1;i<prices.size();i++){
            profit=prices[i]-lowest;
            cout<<profit<<" "<<lowest<<" "<<prices[i]<<endl;
            maxProfit=max(profit,maxProfit);
           
            lowest=min(lowest,prices[i]);
        }
        return maxProfit;
    }
};
