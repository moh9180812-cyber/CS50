#include <stdio.h>
#include <cs50.h>
int main (void){
    int x = 1;
    int y = 2;
    int emp = x;
    x = y;
    y = emp;
    printf("x : %i\n",x);
    printf("y : %i\n",y);

}
