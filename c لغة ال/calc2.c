#include <stdio.h>
#include <cs50.h>
#include <limits.h>

int main(void)
{
    printf("الارقام بادخال تفضل \n");

    long num1 = get_long("num1 : ");
    long num2 = get_long("num2 : ");

    char ch = get_char("الحسابيه العمليه اختر (+ - * /): ");

    // لو الرقمين في مدى int
    if (num1 >= INT_MIN && num1 <= INT_MAX &&
        num2 >= INT_MIN && num2 <= INT_MAX)
    {
        int a = (int) num1;
        int b = (int) num2;

        if (ch == '+')
            printf("الناتج = %i\n", a + b);
        else if (ch == '-')
            printf("الناتج = %i\n", a - b);
        else if (ch == '*')
            printf("الناتج = %i\n", a * b);
        else if (ch == '/')
        {
            if (b != 0)
                printf("الناتج = %i\n", a / b);
            else
                printf(" صفر علي القسمه يمكن لا :خطأ\n");
        }
        else
            printf("صحيحه غير عمليه!\n");
    }
    else // لو الارقام كبيره
    {
        if (ch == '+')
            printf("الناتج = %li\n", num1 + num2);
        else if (ch == '-')
            printf("الناتج = %li\n", num1 - num2);
        else if (ch == '*')
            printf("الناتج = %li\n", num1 * num2);
        else if (ch == '/')
        {
            if (num2 != 0)
                printf("الناتج = %li\n", num1 / num2);
            else
                printf("صفر علي القسمه يمكن لا :خطأ\n");
        }
        else
            printf("صحيحه غير عملية!\n");
    }

    return 0;
}
