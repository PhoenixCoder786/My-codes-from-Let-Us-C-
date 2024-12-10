#include<stdio.h>
#define UPPERTOLOWER(c) ((c)-32)
int main(){
    char c;
    printf("Enter a lowercase character - \n");
    scanf("%c",&c);
    c = UPPERTOLOWER(c);
    printf("The uppercase is - %c",c);
    return 0;
}