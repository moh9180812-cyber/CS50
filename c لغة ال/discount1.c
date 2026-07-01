#include <stdio.h>
#include <cs50.h>
float discount (float price);
int main (void){
    float regular = get_float ("m.price :");
    float sale = discount (regular);
    printf("F.price : %.2f\n", sale);
}

float discount (float price){
    float sale =  price * .85;
    return sale;
   }
