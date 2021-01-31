#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 10
void PrintN(int N)
{
	int i = 0;
	for (i = 1; i <= N; i++)
	{
		printf("%d\n", i);
	}
}
int main()
{
	//简单输出整数
	int N;
	scanf("%d", &N);
	PrintN(N);

	return 0;
}