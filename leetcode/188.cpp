
// reference : https://leetcode.com/discuss/102303/clear-c-solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int maxProfit(int k, const vector<int>& prices) {

		int len = prices.size();
		if (len < 2)
			return 0;
		if (k >= len / 2)
		{
			int maxPro = 0;
			for (int i = 1; i < len; ++i)
			{
				if (prices[i] > prices[i - 1])
					maxPro += prices[i] - prices[i - 1];
			}
			return maxPro;
		}

		vector<int> holds(k + 1, INT_MIN), sells(k + 1, 0);
		for (int i = 0; i<len; ++i)
			for (int j = 1; j <= k; ++j)
			{
				holds[j] = max(holds[j], sells[j - 1] - prices[i]);
				sells[j] = max(sells[j], holds[j] + prices[i]);
			}
		return sells[k];
	}
};