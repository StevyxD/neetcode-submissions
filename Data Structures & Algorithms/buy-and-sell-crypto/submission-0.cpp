class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest=prices[0];
        int profitMax=0;
        for(int i=1;i<prices.size();i++){
            int profit;
            if(prices[i]<lowest){
                lowest=prices[i];
                continue;
            }
            profit=prices[i]-lowest;
            profitMax=max(profit,profitMax);
        }
        return profitMax;
    }
};
