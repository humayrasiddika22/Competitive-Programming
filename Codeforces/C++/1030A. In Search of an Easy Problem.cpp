// 1030A. In Search of an Easy Problem
 
#include<iostream>
using namespace std;
int main()
{
    int number,binary,sum=0;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cin>>binary;
        sum=sum+binary;
    }
    if(sum==0)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}