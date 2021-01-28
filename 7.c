#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***************\n");
	printf("*1.play*0.exit*\n");
	printf("***************\n");
}
void game()
{
	int num = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > num)
		{
			printf("猜大了！\n");
		}
		else if (input < num)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你！猜对了！\n");
			break;
		}
	}
}
int main()
{
	//计算1/1-1/2+1/3....+1/99-1/100
	int fm = 2;
	double js = 1.0;
	int flag = 1;
	for (; fm <= 100; fm++)
	{
		flag = -flag;
		js =js + (flag*1.0)/ fm;
	}
	printf("%fl\n", js);
	//求十个整数中的最大值
	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int a = 0;
	for (a = 1; a < 10; a++)
	{
		if (arr[a] > max)
		{
			max = arr[a];
		}
	}
	printf("max=%d\n", max);
	//乘法口诀表
	int i = 1;
	for (; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		printf("\n");
	}
	//二分查找
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int b = 11;
	int xb = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = xb-1;
	while (left <=right )
	{
		int mid = (left + right) / 2;
		if (b > arr1[mid])
			left=mid+1;
		else if (b < arr1[mid])
			right=mid-1;
		else
		{
			printf("找到了!\n");
			break;
		}
	}
	if (left > right)
		printf("找不到！\n");
	//猜数字小游戏
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}