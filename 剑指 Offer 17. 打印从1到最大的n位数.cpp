#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

//û���Ǵ�������
#if 0
class Solution {
public:
	vector<int> printNumbers(int n) {
		vector<int> ans(pow(10, n) - 1, 0);
		iota(ans.begin(), ans.end(), 1);
		return ans;
	}
};
#endif

//�ַ���ģ��ӷ�
