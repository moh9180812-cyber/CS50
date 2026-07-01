#include <stdio.h>
#include <cs50.h>
int main (void){
    float price = get_float("ur :");
    float result = price * .85 ;
    printf("%.2f\n",result);
}
