#include <stdio.h>
int main()
{
	{
		printf("Hello world!\n");
		char zf = 'G';
		printf("%c\n", zf);
		int age = 20;
		printf("%d\n", age);
		short num = 1;
		printf("%d\n", num);
		long high = 200;
		printf("%d\n", high);
		float weight = 5.0;
		printf("%f\n", weight);
		double pai = 3.14;
		printf("%lf\n", pai); 
	}
	{
		printf("%d\n", sizeof(char));//1
		printf("%d\n", sizeof(short));//2
		printf("%d\n", sizeof(int));//4
		printf("%d\n", sizeof(long));//4
		printf("%d\n", sizeof(long long));//8
		printf("%d\n", sizeof(float));//4
		printf("%d\n", sizeof(double));//8
	}
	{
		int num1 = 0;
		float num2 = 0;
		float sum = 0;
		scanf_s("%d%f", &num1, &num2);//scanfÓÃscanf_sÌæ´ú
		sum = num1 + num2;
		printf("%f", sum);
	}
	return 0;
}
