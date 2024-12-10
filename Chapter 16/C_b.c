#include<stdio.h>

int main(){
    char ISBN[11];
    printf("Enter the ISBN number - \n");
    scanf("%s",&ISBN);
    if (ISBN[9] == 'X')
    {
        ISBN[9] = 10;
    }
    printf("%s",ISBN[9]);
    return 0;
}