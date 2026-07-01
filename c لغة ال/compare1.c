#include <stdio.h>
#include <cs50.h>
int main (void){
 string    x = get_string ("text 1 :");
 string    z = get_string ("text 2 :");
    if(x == z){
        printf("same \n");
    }
    else{
        printf(" different \n");
    }
}
