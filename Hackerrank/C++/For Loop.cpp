//For Loop

#include<iostream>
using namespace std;
int main()
{
    int humu,mini,n;
    cin>>humu>>mini;
    for(int i=humu;i<=mini;i++)
    {
        if(i==1)
            cout<<"one\n";
        if(i==2)
            cout<<"two\n";
        if(i==3)
            cout<<"three\n";
        if(i==4)
            cout<<"four\n";
        if(i==5)
            cout<<"five\n";
        if(i==6)
            cout<<"six\n";
        if(i==7)
            cout<<"seven\n";
        if(i==8)
            cout<<"eight\n";
        if(i==9)
            cout<<"nine\n";
    }
    n=mini-9;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            cout<<"odd\n";
        if(i%2!=0)
            cout<<"even\n";
    }
    return 0;
}
