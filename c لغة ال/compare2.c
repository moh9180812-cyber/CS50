#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void){
 string    x = get_string ("text 1 :");
 string    z = get_string ("text 2 :");
    if(strcmp(x ,z)==0){
        printf("same \n");
    }
    else{
        printf(" different \n");
    }
}
