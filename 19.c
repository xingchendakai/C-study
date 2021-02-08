#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//凑硬币
	//用1角、2角和5角凑出十元以下的面额（整形）
	int x = 0;
	scanf("%d", &x);
	int one, two, five;
	int count = 0;
	if (x <= 10)
	{
		for (one = 0; one <= x * 10; one++)
		{
			for (two = 0; two <= x * 10 / 2; two++)
			{
				for (five = 0; five <= x * 10 / 5; five++)
				{
					if (1 * one + 2 * two + 5 * five == x * 10)
					{
						printf("%d个一角和%d个两角以及%d个五角可以凑出%d元\n", one, two, five, x);
						count++;
					}
				}
			}
		}
	}
	if (count >=1)
	{
		printf("共有%d种凑%d元的方法\n", count, x);
	}
	//整数分解
	int num = 1;
	int mask = 1;
	scanf("%d", &num);
	int t = num;
	do
	{
		t = t / 10;
		mask *= 10;	
	} while (t > 9);
	do
	{
		 int a=num / mask;
		printf("%d", a);
		if (mask > 9)
		{
			printf(" ");
		}
		num=num% mask;
		mask = mask / 10;
	} while (mask > 0);
	return 0;
}