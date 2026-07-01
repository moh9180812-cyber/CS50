#include <stdio.h>
#include <cs50.h>
int main (void){
    int x = get_int ("x :");
    int z = get_int ("z :");
    if(x == z){
        printf("same \n");
    }
    else{
        printf(" less than z \n");
    }
}
