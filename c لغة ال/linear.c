#include <stdio.h>
#include <cs50.h>
int main (void){
    int numbers[]={2,4,6,7,5,0};
    for(int i = 0 ; i<7 ;i++){
        if(numbers[i]==0){
            printf("found in %i steps\n",i+1);
            return 0;
        }
    }
    printf("not found \n");
    return 1;
}
