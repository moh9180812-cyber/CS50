#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    string number;
}pb;


int main (void){
    pb people[2];

    people[0].name ="ali";
    people[0].number ="01076546575";


    people[1].name = "ahmed";
    people[1].number = "01074665463";





    for(int i = 0 ; i < 2 ; i++){
        if(strcmp(people[i].name, "ali" )==0){
            printf("his number is %s",people[i].number);
            return 0 ;
        }
    }
    printf("not found , please try again.\n");
    return 1 ;
}
