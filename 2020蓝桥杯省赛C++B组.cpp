#include<iostream>
using namespace std;


#if 0
/*
试题A 门牌制作

小蓝要为一条街的住户制作门牌号。
这条街一共有 2020 位住户，门牌号从 1 到 2020 编号。
小蓝制作门牌的方法是先制作 0 到 9 这几个数字字符，最后根据需要将字
符粘贴到门牌上，例如门牌 1017 需要依次粘贴字符 1、 0、 1、 7，即需要 1 个
字符 0， 2 个字符 1， 1 个字符 7。
请问要制作所有的 1 到 2020 号门牌，总共需要多少个字符 2？

*/

int main()
{
	int a = 0;//千位
	int b = 0;//百位
	int c = 0;//十位
	int d = 0;//个位
	int count = 0;
	for (int i = 0; i <= 2020; i++)
	{
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		if (a == 2)
			count++;
		if (b == 2)
			count++;
		if (c == 2)
			count++;
		if (d == 2)
			count++;
	}
	cout << count << endl;
	return 0;
}

/*
试题B 既约分数

如果一个分数的分子和分母的最大公约数是1，这个分数称为既约分数。
例如，3/4 , 5/2 , 1/8 , 7/1都是既约分数。请问，有多少个既约分数，
分子和分母都是1 到2020 之间的整数（包括1和2020）？

*/

int main()
{
	int quotient = 0; //商
	int remainder = 1; //余数
	int count = 0; //计数
	int tempA = 0, tempB = 0; //临时变量

	for (int numerator = 1; numerator <= 2020; numerator++) { //分子
		for (int denominator = 1; denominator <= 2020; denominator++) { //分母
			tempA = numerator;
			tempB = denominator;
			while (remainder != 0) {
				remainder = tempA % tempB;
				tempA = tempB;
				tempB = remainder;
			}
			if (tempA == 1) {
				count++;
			}
			remainder = 1;
		}
	}
	cout << count << endl;
	return 0;
}
#endif

/*
试题C 蛇形填数

容易看出矩阵第二行第二列中的数是5。
请你计算矩阵中第20 行第20 列的数是多少？例如，3/4 , 5/2 , 1/8 , 7/1都是既约分数。请问，有多少个既约分数，
分子和分母都是1 到2020 之间的整数（包括1和2020）？

*/
int main()
{
	int arr[100][100];
	int num = 1;
	int i, x, y;
	for (i = 1; i <= 40; i++)
	{
		if (i % 2 == 1)
		{
			for (x = i, y = 1; x >= 1 && y <= i; x--, y++)
				arr[x][y] = num++;
		}
		else
		{
			for (x = 1, y = i; x <= i && y >= 1; x++, y--)
			{
				arr[x][y] = num++;
			}
		}
	}
	cout << arr[20][20];
}






