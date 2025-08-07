// 1030A. In Search of an Easy Problem

#include<iostream>
using namespace std;
int main()
{
    int number,binary,sum=0;
    cout<<"Enter the number of people asked: ";
    cin>>number;
    cout<<"\nIf the problem is easy enter 0 and if the problem is hard enter 1\n"<<endl;
    for(int i=1;i<=number;i++)
    {
        cout<<"Person "<<i<<" answer is: ";
        cin>>binary;
        sum=sum+binary;
    }
    if(sum==0)
        cout<<"\nThe problem is easy"<<endl;
    else
        cout<<"\nThe problem is hard"<<endl;
    return 0;
}
