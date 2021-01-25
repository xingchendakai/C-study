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
    struct BOOK book1={"简爱",50 };
    printf("书名：《%s》\n",book1.name);
    printf("价格：%d元\n", book1.price);
    int age = 100;
    if (age < 18)
        printf("未成年\n");
    else if (age >= 18 && age < 28)
        printf("青年\n");
    else if (age >= 28 && age < 58)
        printf("壮年\n");
    else if (age >= 58 && age < 90)
        printf("老年\n");
    else
        printf("老不死\n");
    //判断一个数是否为奇数
    int num1 = 2;
    if (0 != num1 % 2)
        printf("奇数\n");
    else
        printf("偶数\n");
    //输出1-100之间的奇数
    int num2 = 1;
    while (num2 <= 100)
    {
        if (0 != num2 % 2)
            printf("%d\n", num2);
            num2++;
    }
    //switch语句-多分支语句
    int day = 0;
    scanf_s ("%d", &day);
    switch (day)
    {
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n"); 
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期天\n");
        break;
    default:
        printf("输入错误\n");
        break;
    }
    //在屏幕上打印出1-10
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