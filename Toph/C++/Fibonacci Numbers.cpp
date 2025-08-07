// Fibonacci Numbers

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Position,sum,number1=0,number2=1;
    cin>>Position;
    if(Position==1)
        cout<<1<<endl;
    else
    {
        for(int i=2;i<=Position;i++)
        {
            sum=number1+number2;
            number1=number2;
            number2=sum;
        }
        cout<<sum<<endl;
    }
    return 0;
}
