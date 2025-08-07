// 282A. Bit++

#include<iostream>
using namespace std;
int main()
{
    int number,value,x=0;
    string statements;
    cout<<"Enter the number of statements in the program: ";
    cin>>number;
    for(int i=0;i<number;i++)
    {
        cout<<"Enter the statement: ";
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
    cout<<"Value of x is: "<<value;
    return 0;
}
