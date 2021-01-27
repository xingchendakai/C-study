#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
	//折半查找算法
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int num = 11;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if (num < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了\n");
			break;
		}
		if (left > right)
			printf("找不到\n");
	}
	//动态打印I LOVE YOU!
	char arr1[] = "Gu Yue,you are so beautiful!";
	char arr2[] = "****************************";
	int left1 = 0;
	int right1 = strlen(arr1) - 1;
	while (left1<= right1)
	{
		arr2[left1] = arr1[left1];
		arr2[right1] = arr1[right1];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left1++;
		right1--;
	}
	printf("%s\n", arr2);
	//用户登录小程序
	int i = 0;
	char password[20] = {0};
	for (; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s",password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			printf("密码错误！\n");
		}
	}
	if (i == 3)
	{
		printf("累计输入错误三次，程序自动退出！请30秒后重试。");
	}
	return 0;
}