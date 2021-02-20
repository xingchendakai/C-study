#include <stdio.h>
int is_prime(int n)
{
	int x = 0;
	for (x = 2; x <= n/2 ; x++)
	{
		if (n % x == 0)
		return 0;
	}
		return 1;
}
int main()
{
	int i,count=0;
	for (i = 101; i <= 199; i += 2)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}