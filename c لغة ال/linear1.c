#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main (void){
    string names[]={"ali","mohamed","marwa","ahmed","khaled","adham"};
    for(int i = 0 ; i<6 ;i++){
        if(strcmp(names[i],  "marwa")==0){
            printf("found in %i steps\n",i+1);
            return 0;
        }
    }
    printf("not found \n");
    return 1;
}
