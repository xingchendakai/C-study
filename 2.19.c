#include <stdio.h>
//��������
swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}