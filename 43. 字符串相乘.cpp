#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size();
        int len2 = num2.size();
        string s(len1 + len2, '0');
        for (int i = len1 - 1; i >= 0; i--)
        {
            for (int j = len2 - 1; j >= 0; j--)
            {
                int tmp = (s[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0');
                s[i + j + 1] = tmp % 10 + '0';
                s[i + j] += tmp / 10;
            }
        }
        for (int k = 0; k < len1 + len2; k++)
        {
            if (s[k] != '0')
                return s.substr(k);
        }
        return "0";
    }
};