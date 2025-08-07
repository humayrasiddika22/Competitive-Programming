//Divisors

#include<iostream>
using namespace std;
int main()
{
    int humu;
    cin>>humu;
    for(int i=1;i<=humu;i++)
        if(humu%i==0)
        {
            cout<<i<<endl;
        }
    return 0;
}
