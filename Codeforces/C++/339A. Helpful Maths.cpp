// 339A. Helpful Maths

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string numbers;
    int number1,number2,temp;
    cin>>numbers;
    for(int i=0;i<numbers.size();i=i+2)
    {
        for(int j=0;j<numbers.size();j=j+2)
        {
            number1=numbers[i]-'0';
            number2=numbers[j]-'0';
            if(number1<number2)
            {
                temp=number1;
                number1=number2;
                number2=temp;
            }
            numbers[i]=number1+'0';
            numbers[j]=number2+'0';
        }
    }
    cout<<numbers;
    return 0;
}
