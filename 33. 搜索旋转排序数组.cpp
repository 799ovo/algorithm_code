#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < nums[r])
            {
                if (target <= nums[r] && nums[mid] <= target)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
            else
            {
                if (target >= nums[l] && nums[mid] >= target)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
        }
        return -1;
    }
};