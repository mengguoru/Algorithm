#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxProfit(const vector<int>& prices) {
		if (prices.size() < 2)
			return 0;

		vector<int> sells(prices.size());
		vector<int> buys(prices.size());
		sells[0] = 0, buys[0] = -prices[0], sells[1] = max(sells[0], buys[0] + prices[1]), buys[1] = max(buys[0], -prices[1]);
		for (int i = 2; i < prices.size(); ++i)
		{
			sells[i] = max(sells[i - 1], buys[i - 1] + prices[i]);
			//should cooldown 1 day after sell
			buys[i] = max(buys[i - 1], sells[i - 2] - prices[i]);
		}
		//to get max profit,should sell at the end
		return sells[prices.size()-1];
	}
};