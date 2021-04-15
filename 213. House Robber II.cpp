/*
213. 打家劫舍 II

你是一个专业的小偷，计划偷窃沿街的房屋，每间房内都藏有一定的现金。
这个地方所有的房屋都 围成一圈 ，这意味着第一个房屋和最后一个房屋是紧挨着的
。同时，相邻的房屋装有相互连通的防盗系统，如果两间相邻的房屋在同一晚上被小偷闯入，系统会自动报警 。

给定一个代表每个房屋存放金额的非负整数数组，计算你 在不触动警报装置的情况下 ，能够偷窃到的最高金额。

*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];
        if (nums.size() == 2)
            return max(nums[0], nums[1]);
        int size = nums.size();
        vector<int> dp1(size, 0);
        vector<int> dp2(size, 0);
        dp1[0] = 0;//第一家不偷
        dp1[1] = nums[1];
        for (int i = 2; i < size; i++)
        {
            dp1[i] = max(nums[i] + dp1[i - 2], dp1[i - 1]);
        }
        dp2[0] = nums[0];//第一家偷
        dp2[1] = max(nums[0], nums[1]);
        for (int j = 2; j < size - 1; j++)
        {
            dp2[j] = max(nums[j] + dp2[j - 2], dp2[j - 1]);
        }
        return max(dp1[size - 1], dp2[size - 2]);
    }
};