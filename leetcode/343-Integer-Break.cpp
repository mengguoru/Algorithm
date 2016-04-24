class Solution {
public:
	int integerBreak(const int n) {
		if (n == 2 || n == 3)
			return n - 1;
		if (n == 4)
			return 4;

		int result = 1,temp = n;
		for (; temp > 4; temp -= 3)
			result *= 3;
		result *= temp;

		return result;
	}
};