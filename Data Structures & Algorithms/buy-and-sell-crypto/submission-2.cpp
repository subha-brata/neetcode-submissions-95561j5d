class Solution {
public:
    int maxProfit(vector<int>& p) {
        int buy= INT_MAX;
        int profit=0;
        for(auto i:p){
            buy = min(buy,i);
            profit = max(i-buy,profit);
        }
        return profit;
    }
};
