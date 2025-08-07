// Is Palindrome

#include <iostream>
using namespace std;
int main()
{
    string humu,mini;
    cin>>humu;
    mini=humu;
    int len = mini.length();
    int n=len-1;
    for(int i=0;i<(len/2);i++)
    {
    swap(mini[i],mini[n]);
    n = n-1;
    }
    if (humu==mini)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}


