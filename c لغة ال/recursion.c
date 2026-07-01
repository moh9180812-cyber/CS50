#include <stdio.h>
#include <cs50.h>
void rec (int n );
int main (void){
    rec(4);
}
void rec (int n){
    if (n == 0){
        return;
    }
    printf("hello world\n");
    rec (n - 1);
}
