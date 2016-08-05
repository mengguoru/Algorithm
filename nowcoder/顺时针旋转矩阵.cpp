/*
题目描述

有一个NxN整数矩阵，请编写一个算法，将矩阵顺时针旋转90度。
给定一个NxN的矩阵，和矩阵的阶数N,请返回旋转后的NxN矩阵,保证N小于等于300。
测试样例：
[[1,2,3],[4,5,6],[7,8,9]],3
返回：[[7,4,1],[8,5,2],[9,6,3]]
*/

class Rotate {
public:
    vector<vector<int> > rotateMatrix(vector<vector<int> > mat, int n) {
        // write code here
        vector<vector<int> > tempMatrix(n,vector<int>(n));
        
        for(int i = 0;i < n;++i){
            for(int j = n-1;j >= 0;--j){
                tempMatrix[i][(n - 1) - j] = mat[j][i];
            }
        }
        return tempMatrix;
    }
};