#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;
	int f = 6;
	a = b += c++ - d + --e / -f;//a=b+c-d+(e-1)/(-f)
	printf("%d\n", a);
	return 0;
}