// 282A. Bit++
 
#include<iostream>
using namespace std;
int main()
{
    int number,value,x=0;
    string statements;
    cin>>number;
    for(int i=0;i<number;i++)
    {
        cin>>statements;
        if(statements[1]=='+')
        {
            x=x+1;
        }
        else if(statements[1]=='-')
        {
            x=x-1;
        }
        value=x;
    }
    cout<<value;
    return 0;
}