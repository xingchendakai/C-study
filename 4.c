#include <stdio.h>
struct BOOK
{
    char name[20];
    short price;
};
int main()
{
	int a = 1;
    int* b = &a;
    *b = 2;
    printf("%p\n", &a);
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(int*));
    struct BOOK book1={"��",50 };
    printf("��������%s��\n",book1.name);
    printf("�۸�%dԪ\n", book1.price);
    int age = 100;
    if (age < 18)
        printf("δ����\n");
    else if (age >= 18 && age < 28)
        printf("����\n");
    else if (age >= 28 && age < 58)
        printf("׳��\n");
    else if (age >= 58 && age < 90)
        printf("����\n");
    else
        printf("�ϲ���\n");
    //�ж�һ�����Ƿ�Ϊ����
    int num1 = 2;
    if (0 != num1 % 2)
        printf("����\n");
    else
        printf("ż��\n");
    //���1-100֮�������
    int num2 = 1;
    while (num2 <= 100)
    {
        if (0 != num2 % 2)
            printf("%d\n", num2);
            num2++;
    }
    //switch���-���֧���
    int day = 0;
    scanf_s ("%d", &day);
    switch (day)
    {
    case 1:
        printf("����һ\n");
        break;
    case 2:
        printf("���ڶ�\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n"); 
        break;
    case 6:
        printf("������\n");
        break;
    case 7:
        printf("������\n");
        break;
    default:
        printf("�������\n");
        break;
    }
    //����Ļ�ϴ�ӡ��1-10
    int num4 = 1;
    while (num4<=10)
    {
        printf("%d ", num4);
        num4++;
    }
    char c[10] = "ABC";
    printf("%s\n", c);
        return 0;
}