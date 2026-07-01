#include <stdio.h>
#include <cs50.h>
void max(int x);
int main (void){
    int height = get_int ("height :");
    max (height);
}
void max(int x){
      if(x == 0){
        return;
    }
    for (int i = 0 ; i < x ; i++){
        printf("#");
    }
    printf("\n");
    max(x - 1);
}


