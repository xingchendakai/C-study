#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main()
{
	//�û���¼����
	int i = 1;
	int arr[20] = { 0 };
	int password = "guyue040917";
	int xz = 0;
	printf("����������>:");
	do
	{
		scanf("%s", &arr);
		if (strcmp(arr, password) == 0)
		{
			printf("��½�ɹ���\n");
			break;
		}
		else
		{
			printf("�������!\n");
			i++;
		}
	} 
	while (i < 4);
	if (i > 3)
	{
		printf("������������Ѵ����Ρ��Զ��˳�����");
	}
	else
	{
		printf("�ڿڿڿڿڿڿڿڿڿڿڿ�\n");
		printf("�ڿڿڹ�����Ư�������ڿ�\n");
		printf("�ڿڿ��ҴӲ�˵�ٻ����ڿ�\n");
		printf("�ڿڿڳ���������䣡�ڿ�\n");
		printf("�ڿڿڿڿڿڿڿڿڿڿڿ�\n");
	}
	//
		return 0;
}