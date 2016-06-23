// this is a time limit exceed solution

class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int len = nums.size();
        if(0==len)
            return 0;
         
        vector<long> sums(len+1,0);
        for(int i=0;i<len;++i)
        {
            sums[i+1] = sums[i]+nums[i];
        }
        
        int counter=0;
        for(int i=0;i<len;++i)
        {
            for(int j=i+1;j<=len;++j)
            {
                if(lower<=sums[j]-sums[i] && sums[j]-sums[i]<=upper)
                    counter++;
            }
        }
        return counter;
    }
};