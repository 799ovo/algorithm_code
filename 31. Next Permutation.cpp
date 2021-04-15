/*
31. ��һ������

ʵ�ֻ�ȡ ��һ������ �ĺ������㷨��Ҫ���������������������г��ֵ�������һ����������С�

�����������һ����������У��������������г���С�����У����������У���

���� ԭ�� �޸ģ�ֻ����ʹ�ö��ⳣ���ռ䡣

*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i;
        for (i = n - 1; i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                int index = i;
                for (int j = i; j < n; j++)
                {
                    if (nums[j]<nums[index] && nums[j]>nums[i - 1])
                    {
                        index = j;
                    }
                }
                swap(nums[i - 1], nums[index]);
                break;
            }
        }
        sort(nums.begin() + i, nums.end());
    }
};