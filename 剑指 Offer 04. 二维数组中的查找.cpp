/*
��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳�����������һ����Ч�ĺ�����
����������һ����ά�����һ���������ж��������Ƿ��и�������
*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int row = matrix.size();
        int col = matrix[0].size();
        int i = 0;
        int j = col - 1;
        while (i < row && j >= 0)
        {
            if (target > matrix[i][j])
                i++;
            else if (target < matrix[i][j])
                j--;
            else
            {
                return true;
            }
        }
        return false;
    }
};