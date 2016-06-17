class Solution {
public:
	int maxProfit(const vector<int>& prices) {
		if (prices.size() < 2)
			return 0;

		int maxPro = 0, buy = prices[0];
		for (auto price : prices)
		{
			maxPro = max(maxPro, price - buy);
			buy = min(buy, price);
		}
		return maxPro;
	}
};