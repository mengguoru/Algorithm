/*
author : mengguoru
date   : 2016/8/12
*/

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

/*
use : shuffle card algorithm
*/
class Solution {
private:
	vector<int> nums;
public:
	Solution() {};
	Solution(vector<int>& nums) :nums(nums) {};

	/** Resets the array to its original configuration and return it. */
	vector<int> reset() {
		return this->nums;
	}

	/** Returns a random shuffling of the array. */
	vector<int> shuffle() {
		vector<int> tmp = this->nums;
		srand(time(0));

		for (int i = nums.size() - 1; i > 0; --i) {
			int pos = rand() % i;
			swap(tmp[pos], tmp[i]);
		}
		return tmp;
	}
};

/**
* Your Solution object will be instantiated and called as such:
* Solution obj = new Solution(nums);
* vector<int> param_1 = obj.reset();
* vector<int> param_2 = obj.shuffle();
*/

int main()
{
	int a[] = { 16,2,77,29 };
	std::vector<int> vec(a, a + sizeof(a) / sizeof(int));

	Solution obj = Solution(vec);
	vector<int> param_1 = obj.reset();
	vector<int> param_2 = obj.shuffle();

	for (auto &v : param_2)
		cout << v << " ";

	return 0;
}