class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = prices[0];
        int profit = 0;
        
        for(int i=1; i< prices.size(); ++i){
            profit = max(profit, prices[i]- price);
            price = min(prices[i], price);
            
        } 
        return profit;
    } 
};
