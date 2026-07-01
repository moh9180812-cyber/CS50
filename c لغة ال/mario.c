#include <stdio.h>
#include <cs50.h>
void ali (void);
int main (void){

      int x ;

      do{
        x = get_int("num of ? :");
      }while(x < 1);

   for (int l = 0 ; l < x ; l++){
    for (int i = 0 ; i < x ; i++ ){
        printf("?");
    }
    printf("\n");
   }

}

