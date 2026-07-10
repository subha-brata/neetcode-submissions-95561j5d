class Solution {
    /**
     * @param {number[]} prices
     * @return {number}
     */
    maxProfit(prices) {
        let buy =101, profit =0;

        for(let p of prices){
            buy = Math.min(buy,p);
            profit=Math.max(p-buy, profit);
        }
        return profit;
    }
}
