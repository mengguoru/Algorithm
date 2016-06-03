class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3;

	    sort(nums1.begin(), nums1.end());
	    sort(nums2.begin(), nums2.end());
	    for (int i_a = 0, i_b = 0; i_a < nums1.size() && i_b < nums2.size();)
	    {
		    if (nums1[i_a] == nums2[i_b]) {
			    nums3.push_back(nums1[i_a]);
			    i_a++;
			    i_b++;
		    }else if (nums1[i_a] > nums2[i_b])
			    i_b++;
		    else
			    i_a++;
	    }
	    return nums3;
    }
};
