#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int ch = 0;
	char password[20] = { 0 };
	int ret = 0;
	printf("���������룺");
	scanf("%s",password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�����룺(Y/N)");
	ret = getchar();
	if (ret == 'Y')
		printf("ȷ�ϳɹ���\n");
	else
		printf("����ȷ�ϡ�\n");
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
	/*����n�Ľ׳�*/
	int e = 0;
	int f = 0;
	int JC= 1;
	printf("�������������Ľ׳ˣ�");
	scanf("%d",&f);
	for (e = 1; e <=f; e++)
	{
		JC = JC * e;
	}
	printf("%d\n", JC);
	/*����1��+2��+3��+4��+5��*/
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