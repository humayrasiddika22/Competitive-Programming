// "Hello World!" in C

#include<stdio.h>
int main()
{
    char sentence[100];
    scanf("%[^\n]",&sentence);
    printf("Hello, World!\n%s",sentence);
    return 0;
}
