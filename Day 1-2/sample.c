#include<stdio.h>
void main(){
    char arr[100];
    printf("\nEnter a string  ");
    // scanf("%s",arr);
    scanf("%[^\n]%*c",arr);
    printf("%s",arr);
}

