#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main (void){

    string names [] = {"ahmed","ali"};
    string numbers [] = {"01065765764","010875655"};

    for(int i = 0 ; i < 2 ; i++){
        if(strcmp(names[i], "ali" )==0){
            printf("his number is %s\n",numbers[i]);
            return 0 ;
        }
    }
    printf("not found , please try again.\n");
    return 1 ;
}
