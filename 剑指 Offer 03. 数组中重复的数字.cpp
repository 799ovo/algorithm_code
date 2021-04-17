#include<iostream>
#include<unordered_map>
using namespace std;
//¹þÏ£
//class Solution {
//public:
//    int findRepeatNumber(vector<int>& nums) {
//        unordered_map<int, int> map;
//        for (auto num : nums)
//        {
//            map[num]++;
//            if (map[num] > 1)
//                return num;
//        }
//        return 0;
//    }
//};
//Ô­µØ
class Solution {
public:
    int findRepeatNumber(vector<int>& nums)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == i)
            {
                i++;
                continue;
            }
            if (nums[i] == nums[nums[i]])
                return nums[i];
            else
                swap(nums[i], nums[nums[i]]);
        }
        return -1;
    }
};