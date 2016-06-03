class Solution {
public:
    /**
    * 获得两个整形二进制表达位数不同的数量
    *
    * @param m 整数m
    * @param n 整数n
    * @return 整型
    */
    int countBitDiff(int m, int n) {
        int counter = 0;
 
        int tmp = m^n;
        while (tmp != 0)
        {
            counter += tmp & 0x01;
            tmp >>= 1;
        }
        return counter;
    }
};