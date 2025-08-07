// Playing With Characters

#include<stdio.h>
int main()
{
    char word;
    char word1[20];
    char word2[100];

    scanf("%c%s",&word,&word1);
    scanf("\n");
    scanf("%[^\n]",&word2);

    printf("%c\n%s\n%s",word,word1,word2);
    return 0;
}
