#include <stdio.h>
#include <cs50.h>
float discount(float price, int percent);
int main(void){
    float regular = get_float("main price :");
    int percent = get_int("your discount :");
    float sale = discount(regular , percent);
    printf("final price : %.2f\n",sale);
}

  float discount(float price, int percent){
          return price * (100-percent)/100;
  }
