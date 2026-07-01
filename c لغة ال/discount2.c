#include <stdio.h>
#include <cs50.h>
float discount (float price);
int main (void){
    float regular = get_float ("M.price :");
    float sale = discount (regular);
    printf("final price = %.2f\n",sale);
}

 float discount (float price){
    return price * .85;
 }
