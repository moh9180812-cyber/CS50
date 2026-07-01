#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int x = get_int (" x :");

    if ( x % 2 == 0)
    {
        printf("even\n");
    }

    else
    {
        printf("odd\n");
    }
}
