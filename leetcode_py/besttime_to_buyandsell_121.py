class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        buyprices = prices[0]
        profit = 0
        for i in range(0,len(prices)):
            if(buyprices > prices[i]):
                buyprices = prices[i]
            profit = max(profit,prices[i] - buyprices)
        return profit
