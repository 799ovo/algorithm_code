#include<iostream>
using namespace std;


#if 0
/*
����A ��������

С��ҪΪһ���ֵ�ס���������ƺš�
������һ���� 2020 λס�������ƺŴ� 1 �� 2020 ��š�
С���������Ƶķ����������� 0 �� 9 �⼸�������ַ�����������Ҫ����
��ճ���������ϣ��������� 1017 ��Ҫ����ճ���ַ� 1�� 0�� 1�� 7������Ҫ 1 ��
�ַ� 0�� 2 ���ַ� 1�� 1 ���ַ� 7��
����Ҫ�������е� 1 �� 2020 �����ƣ��ܹ���Ҫ���ٸ��ַ� 2��

*/

int main()
{
	int a = 0;//ǧλ
	int b = 0;//��λ
	int c = 0;//ʮλ
	int d = 0;//��λ
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
����B ��Լ����

���һ�������ķ��Ӻͷ�ĸ�����Լ����1�����������Ϊ��Լ������
���磬3/4 , 5/2 , 1/8 , 7/1���Ǽ�Լ���������ʣ��ж��ٸ���Լ������
���Ӻͷ�ĸ����1 ��2020 ֮�������������1��2020����

*/

int main()
{
	int quotient = 0; //��
	int remainder = 1; //����
	int count = 0; //����
	int tempA = 0, tempB = 0; //��ʱ����

	for (int numerator = 1; numerator <= 2020; numerator++) { //����
		for (int denominator = 1; denominator <= 2020; denominator++) { //��ĸ
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
����C ��������

���׿�������ڶ��еڶ����е�����5��
�����������е�20 �е�20 �е����Ƕ��٣����磬3/4 , 5/2 , 1/8 , 7/1���Ǽ�Լ���������ʣ��ж��ٸ���Լ������
���Ӻͷ�ĸ����1 ��2020 ֮�������������1��2020����

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






