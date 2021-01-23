#include <stdio.h>
#include <string.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}
enum color//枚举常量
{
	red,
	yellow,
	blue
};
#define b 5//#define定义的标识符常量
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);//这里不能加换行符\n
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	3;//字面常量
	const int a = 4;
	enum color c = red;
	enum color d = yellow;
	enum color e = blue;
	printf("%d\n", a);
	printf("%d\n", b);
	char arr1[] = "qwe";//'q' 'w' 'e' '\0'(字符串的结束标志)
	char arr2[] = { 'q', 'w', 'e','\0' };
	char arr3[] = { 'q','w','e' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度的
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("c:\\test\\32\\test.c\n");
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%d\n", strlen("c:\\test\\32\\test.c"));
	printf("%c\n", '\132');
	printf("%c\n", '\x31');
	int input = 0;
	printf("跨考计算机\n");
	printf("你要坚持下去吗？：（1/0）");
	scanf_s("%d", &input);
	if (input == 1)
		printf("以后赚大钱！");
	else
		printf("化工厂吃灰！");
	int day = 0;
		printf("开始学习C语言\n");
		while (day <= 30) {
			printf("学习天数：%d\n", day);
			day++;
		}
		if (day>30)
		printf("终于学会了\n");
		int z = 10;
		int m = 20;
		sum = add(z, m);
		printf("sum=%d\n", sum);
		char arr[6] = { ' i','j','k','l','g','f' };
		printf("%c\n", arr[0]);
		int v = 0;
		while (v < 6) 
		{
			printf("%c\n", arr[v]);
			v++;
		}
		int u = 1;
		int y = 2;
		int r = u & y;
		int h = u | y;
		int t = u ^ y;
		printf("%d",r);
		printf("%d",h);
		printf("%d",t);
	return 0;
	
}


