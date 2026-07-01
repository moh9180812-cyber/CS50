#include <stdio.h>
#include <cs50.h>
int main (void){
    int x = get_int(" x :");
    int z = get_int(" z :");
    printf("%.50f\n",(double)x/(double)z);
}
