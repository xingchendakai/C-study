#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num=0;
	scanf("%d", &num);
	int row = num - 2;
	for (int i = 1; i <= row;i++)
	{
		for (int j = 1; j <= num;j++)
		{
			int x = num / 2 + 1 - i;
			if (j <= row-i||j>num-row+i)
			{
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}
	for (int i = row-1; i > 0; i--)
	{
		for (int j = 1; j <= num; j++)
		{
			int x = num / 2 + 1 - i;
			if (j <= row - i || j > num - row + i)
			{
				printf(" ");
			}
			else
			printf("*");
		}
		printf("\n");
	}
	return 0;
}