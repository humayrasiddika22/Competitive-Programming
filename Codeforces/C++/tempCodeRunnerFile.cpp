// 279B. Books

#include <iostream>
using namespace std;
int main()
{
    int n,t,sum=0,j=0,max_books;
    int a[n];
    cin>> n,t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i;i<n;i++)
    {
        sum=sum+a[i];
        while (sum>t)
        {
            sum=sum-a[j];
            j=j+1;
        }
        max_books=(i-j+1);
    }
    cout<<max_books;
    return 0;
}