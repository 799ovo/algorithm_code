/*
213. ��ҽ��� II

����һ��רҵ��С͵���ƻ�͵���ؽֵķ��ݣ�ÿ�䷿�ڶ�����һ�����ֽ�
����ط����еķ��ݶ� Χ��һȦ ������ζ�ŵ�һ�����ݺ����һ�������ǽ����ŵ�
��ͬʱ�����ڵķ���װ���໥��ͨ�ķ���ϵͳ������������ڵķ�����ͬһ���ϱ�С͵���룬ϵͳ���Զ����� ��

����һ������ÿ�����ݴ�Ž��ķǸ��������飬������ �ڲ���������װ�õ������ ���ܹ�͵�Ե�����߽�

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
        dp1[0] = 0;//��һ�Ҳ�͵
        dp1[1] = nums[1];
        for (int i = 2; i < size; i++)
        {
            dp1[i] = max(nums[i] + dp1[i - 2], dp1[i - 1]);
        }
        dp2[0] = nums[0];//��һ��͵
        dp2[1] = max(nums[0], nums[1]);
        for (int j = 2; j < size - 1; j++)
        {
            dp2[j] = max(nums[j] + dp2[j - 2], dp2[j - 1]);
        }
        return max(dp1[size - 1], dp2[size - 2]);
    }
};