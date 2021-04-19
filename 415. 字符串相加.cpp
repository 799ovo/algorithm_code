#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string s;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int k = 0;
        while (i >= 0 || j >= 0 || k != 0)
        {
            if (i >= 0)
            {
                k += num1[i--] - '0';
            }
            if (j >= 0)
            {
                k += num2[j--] - '0';
            }
            s += to_string(k % 10);
            k /= 10;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
//int main()
//{
//    string num1 = "127";
//    string num2 = "556";
//    Solution sl;
//    string res = sl.addStrings(num1, num2);
//    cout << res << endl;
//
//}