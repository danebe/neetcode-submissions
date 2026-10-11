class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit=0;
        for (int i : prices){
            minprice = min(minprice, i);
            maxprofit = max(maxprofit, i-minprice);
        }
        return maxprofit;
    }
};
