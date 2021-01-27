#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
int main()
{
	//比较三个数的大小
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num2 > num1)
	{
		int mid = num1;
		num1 = num2;
		num2 = mid;

	}
	if (num3 > num1)
	{
		int mid = num1;
		num1 = num3;
		num3 = mid;
	}
	if (num3 > num2)
	{
		int mid = num2;
		num2 = num3;
		num3 = mid;
	}
	printf("%d %d %d\n", num1, num2, num3);
	//打印1-100之间3的倍数
	int a = 1;
	for (; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("%d ", a);
	
	}
	printf("\n");
	//最大公约数
	int c = 0;
	int d = 0;
	int e = 0;
	scanf("%d%d", &c, &d);
	if (c > d)
	{
		for (; c % d != 0;)
		{
			e = c % d;
			c = d;
			d = e;
		}
		printf("最大公约数为：%d\n", d);
	}
	else if (c < d)
	{
		for (; d % c != 0;)
		{
			e = d % c;
			d = c;
			c = e;
		}
		printf("最大公约数为：%d\n", c);
	}
	else
		printf("最大公约数为：%d", c);
	//打印1000-2000之间的闰年
	int f = 1000;
	int count = 0;
	for (f = 1000; f <= 2000; f++)
	{
		if (f % 4 == 0 && f % 100 != 0)
		{
			printf("%d ", f);
			count++;
		}
		else if (f % 400 == 0)
		{
			printf("%d", f);
			count++;
		}
	}
	printf("\n");
	printf("1000-2000之间共有%d个闰年。\n", count);
	//打印100-200之间的素数
	int g = 0;
	int count1 = 0;
	for (g = 101; g <= 200; g+=2)
	{
		int h = 0;
		for (h = 2; h <=sqrt(g); h++)
		{
			if (g % h == 0)
				break;
		}
		if (h > sqrt(g))
		{
			count1++;
			printf("%d ", g);
		}
	}
	printf("\n");
	printf("100-200之间共有%d个素数\n", count1);
	//数9的个数（1-100）
	int i = 0;
	int count2 = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 10 == 9)
			count2++;
		if (i / 10 == 9)
			count2++;
	}
	printf("1-100之间9的个数为%d个\n", count2);
	return 0;
}