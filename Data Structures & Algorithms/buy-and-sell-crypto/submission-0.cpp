class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell =0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy = prices[i];
            }
            else{
                int diff = prices[i]-buy;
                sell = max(sell,diff);
            }
        }
        return sell;
    }
};
