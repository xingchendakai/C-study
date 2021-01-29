#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
	//用户登录程序
	int i = 1;
	int arr[20] = { 0 };
	int password = "guyue040917";
	int xz = 0;
	printf("请输入密码>:");
	do
	{
		scanf("%s", &arr);
		if (strcmp(arr, password) == 0)
		{
			printf("登陆成功！\n");
			break;
		}
		else
		{
			printf("密码错误!\n");
			i++;
		}
	} 
	while (i < 4);
	if (i > 3)
	{
		printf("输入密码错误已达三次。自动退出程序！");
	}
	else
	{
		printf("口口口口口口口口口口口口\n");
		printf("口口口古月真漂亮啊！口口\n");
		printf("口口口我从不说假话！口口\n");
		printf("口口口除了上面这句！口口\n");
		printf("口口口口口口口口口口口口\n");
	}
	//
		return 0;
}