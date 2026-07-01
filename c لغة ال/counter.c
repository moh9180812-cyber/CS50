#include <stdio.h>
#include <cs50.h>
int main (void){
    string text = get_string("text :");
    int i = 0;
    while (text[i] != '\0'){
        i++;
    }
    printf("%i\n",i);
}
