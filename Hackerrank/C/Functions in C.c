// Functions in C

#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        printf("%i",a);
    else if(b>a && b>c && b>d)
        printf("%i",b);
    else if(c>a && c>b && c>d)
        printf("%i",c);
    else if(d>a && d>b && d>c)
        printf("%i",d);
    else
        printf("error");
    return 0;
}
