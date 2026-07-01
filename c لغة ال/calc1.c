#include <stdio.h>
#include <cs50.h>
#include <limits.h> // عشان نستخدم INT_MAX و INT_MIN

int main(void)
{
    printf("الارقام بادخال تفضل:\n");

    // هنا بناخد الارقام كبيرة (long)
    long num1 = get_long("num 1: ");
    long num2 = get_long("num 2: ");

    // لو الاتنين جوه مدى int
    if (num1 >= INT_MIN && num1 <= INT_MAX &&
        num2 >= INT_MIN && num2 <= INT_MAX)
    {
        int a = (int) num1;
        int b = (int) num2;
        printf("الناتج = %i\n", a + b );
    }
    else
    {
        printf("الناتج = %li\n", num1 + num2 );
    }

    return 0;
}
