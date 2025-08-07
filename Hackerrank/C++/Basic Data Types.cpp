// Basic Data Types

#include<iostream>
#include <cstdio>
#include<string>
using namespace std;
int main()
{
    int a;
    long long b;
    char c[10];
    float d;
    double e;
    scanf("%d %lld %s %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%lld\n%s\n%.3f\n%.9lf\n",a,b,c,d,e);
    return 0;
}

