#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int numWays(int n) {
        vector<int> dp(n + 1, 0);
        if (n <= 1)
            return 1;
        else
        {
            dp[0] = 1;
            dp[1] = 1;
            for (int i = 2; i <= n; i++)
            {
                dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
            }
            return dp[n];
        }
    }
};