class Solution {
public:
	bool isHappy(int n) {
		if (n == 1)
			return true;
		set<int> set1;

		for (int sum=0; n > 1;) {
			while (n) {
				int tmp = n % 10;
				sum += tmp*tmp;
				n /= 10;
			}
			if (sum == 1)
				return true;
			else if (set1.find(sum) != set1.end())
				return false;
			n = sum;
			set1.insert(sum);
			sum = 0;
		}
		return n == 1;
	}
};