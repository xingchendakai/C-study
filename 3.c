#include <stdio.h>
#define long 10
int add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
void test()
{
	int n = 1;
	n++;
	printf("n=%d\n", n);
}
int main()
{
	int a = 1;
	int b = 0;
	int c = 2;
	c = add(a, b);
	printf("c=%d\n", c);
	int num1 = 1;
	int num2 = 2;
	if (num1 > num2)
		printf("较大值是：%d\n", num1);
	else
		printf("较大值是：%d\n", num2);
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	int arr[] = { 1,2,3,4,5,6,7 };
	printf("数组的大小为：%d个字节\n", sizeof(arr));
	printf("数组中元素个数为：%d个\n", sizeof(arr) / sizeof(arr[0]));
	int d = ~b;
	printf("%d\n", d);
	int e = a++;
	printf("e=%d a=%d\n", e, a);
	int f = ++a;
	printf("a=%d f=%d\n", a, f);
	int g = a & b;
	int h = a && b;
	int i = a | b;
	int j = a || b;
	printf("g=%d h=%d i=%d j=%d\n", g, h, i, j);
	int max = (a > b ? a : b);
	printf("max=%d\n", max);
	typedef unsigned int u_int;
	u_int num3 = -5;//等价于unsigned int num3 = -5;
	int k = 0;
	while (k < 5)
	{
		static int l = 1;
		l++;
		printf("l=%d\n", l);
		k++;
	}
	int m = 0;
	while (m < 5)
	{
		test();
		m++;
	}
	int o = long;
	printf("%d\n", o);
	int p = 10;
	int* q = &p;//*p是指针变量
	printf("%p\n", &p);
	printf("%p\n", q);
	*q = 20;
	printf("p=%d\n", p);
	printf("电脑是%d位的\n", 8 * sizeof(*q));
	return 0;
}