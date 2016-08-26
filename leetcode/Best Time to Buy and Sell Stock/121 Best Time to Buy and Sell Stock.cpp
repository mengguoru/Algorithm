/*
description ：Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

solution ：if array loop from 0 to i,the maxProfit if stock sell at i'th is (price[i] - minPrice in array[0 ... n-1]),but maybe there is price[k] (k<i) > price[i],make (price[k] - minPrice) > (price[i] - minPrice),so this should be consider.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        if(1 >= prices.size())
            return maxProfit;
        
        int minPrice = prices[0];
        for(int i=1;i<prices.size();++i)
        {
            if(prices[i] - minPrice > maxProfit)
                maxProfit = prices[i] - minPrice;
            if(prices[i] < minPrice)
                minPrice = prices[i];
        }
        return maxProfit;
    }
};