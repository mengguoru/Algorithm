class Solution {
public:
	int search(const vector<int>& nums, int target) {
		if (nums.size() <= 0)
			return -1;
		int low = 0, high = nums.size() - 1, mid = 0;

		while (low <= high) {
			mid = low + (high - low) / 2;
			if (nums[mid] == target)
				return mid;
			//judge limit point in range [low,mid-1] or [mid+1,high]
			if (nums[mid] > nums[high])// limit point in [mid+1,high]
			{
				if (nums[low] <= target && target < nums[mid])
					high = mid - 1;
				else
					low = mid + 1;
			}
			else {
				if (nums[mid] < target && target <= nums[high])
					low = mid + 1;
				else
					high = mid - 1;
			}

		}
		return -1;
	}
};