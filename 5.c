#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int ch = 0;
	char password[20] = { 0 };
	int ret = 0;
	printf("请输入密码：");
	scanf("%s",password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码：(Y/N)");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功！\n");
	else
		printf("放弃确认。\n");
	int bh = 0;
	while ((bh = getchar()) != EOF)
	{
		if (bh < '0' || bh>'9')
		continue;
		putchar(bh);
		printf("\n");
		break;
	}
	for (int a = 0; a <= 10; a++)
	{
		printf("%d ", a);
	}
	int b = 0;
	int c = 0;
	for (b = 0, c = 0; c ==0; b++, c++)
		c++;
	int d = 1;
	do
	{
		printf("%d ", d);
		d++;
	} while (d <= 10);
	/*计算n的阶乘*/
	int e = 0;
	int f = 0;
	int JC= 1;
	printf("请输入你想计算的阶乘：");
	scanf("%d",&f);
	for (e = 1; e <=f; e++)
	{
		JC = JC * e;
	}
	printf("%d\n", JC);
	/*计算1！+2！+3！+4！+5！*/
	int j = 0;
	int JC1 = 1;
	int sum = 0;
	for (j = 1; j <= 5; j++)
	{
		JC1 = JC1 * j;
		sum = sum + JC1;
	}
	printf("%d", sum);
	return 0;
}