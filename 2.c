#include <stdio.h>
#include <string.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}
enum color//ö�ٳ���
{
	red,
	yellow,
	blue
};
#define b 5//#define����ı�ʶ������
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf_s("%d%d", &num1, &num2);//���ﲻ�ܼӻ��з�\n
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	3;//���泣��
	const int a = 4;
	enum color c = red;
	enum color d = yellow;
	enum color e = blue;
	printf("%d\n", a);
	printf("%d\n", b);
	char arr1[] = "qwe";//'q' 'w' 'e' '\0'(�ַ����Ľ�����־)
	char arr2[] = { 'q', 'w', 'e','\0' };
	char arr3[] = { 'q','w','e' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
	printf("%d\n", strlen(arr2));
	printf("%d\n", strlen(arr3));
	printf("c:\\test\\32\\test.c\n");
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%d\n", strlen("c:\\test\\32\\test.c"));
	printf("%c\n", '\132');
	printf("%c\n", '\x31');
	int input = 0;
	printf("�翼�����\n");
	printf("��Ҫ�����ȥ�𣿣���1/0��");
	scanf_s("%d", &input);
	if (input == 1)
		printf("�Ժ�׬��Ǯ��");
	else
		printf("�������Իң�");
	int day = 0;
		printf("��ʼѧϰC����\n");
		while (day <= 30) {
			printf("ѧϰ������%d\n", day);
			day++;
		}
		if (day>30)
		printf("����ѧ����\n");
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


