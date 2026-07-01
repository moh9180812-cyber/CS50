#include <stdio.h>
#include <cs50.h>
int add (int a , int b);
int main (void)
{
    printf("الارقام بادخال تفضل\n");
    int x = get_int("what is x: ");
    int y = get_int("what is y: ");
    printf("%i\n",add(x,y));
}
int add (int a , int b)
{
    return a+b;
}
