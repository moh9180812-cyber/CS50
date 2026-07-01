#include <stdio.h>
#include <stdlib.h>
int main (void){
    char *z = malloc(10);
     //=char z[10];
    printf("z :");
    scanf("%s",z);
    printf("z : %s\n",z);
}
