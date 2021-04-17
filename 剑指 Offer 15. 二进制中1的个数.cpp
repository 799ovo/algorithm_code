#include<iostream>
using namespace std;
//按位与，右移
//class Solution {
//public:
//    int hammingWeight(uint32_t n) {
//        int count = 0;
//        while (n)
//        {
//            if (n & 1 == 1)
//                count++;
//            n >>= 1;
//        }
//        return count;
//    }
//};


//巧用n&(n-1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0)
        {
            count++;
            n = n & (n - 1);
        }
        return count;
    }
};