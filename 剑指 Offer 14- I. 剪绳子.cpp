#include<iostream>
#include<vector>
using namespace std;
//��̬�滮
#if 0
class Solution {
public:
    int cuttingRope(int n) {
        vector<int> dp(n + 1);
        dp[2] = 1;
        for (int i = 3; i <= n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
            }
        }
        return dp[n];
    }
};
#endif

//̰��
int cuttingRope(int n)
{
    if (n < 4)
        return n - 1;
    else
    {
        int res = 1;
        while (n > 4)
        {
            res *= 3;
            n -= 3;
        }
        return res * n;
    }
}