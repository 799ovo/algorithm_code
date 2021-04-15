/*
31. 下一个排列

实现获取 下一个排列 的函数，算法需要将给定数字序列重新排列成字典序中下一个更大的排列。

如果不存在下一个更大的排列，则将数字重新排列成最小的排列（即升序排列）。

必须 原地 修改，只允许使用额外常数空间。

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