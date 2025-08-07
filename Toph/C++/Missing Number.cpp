// Missing Number

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum,sum2=0,numberArray[5];
    cin>>sum;
    for(int i=0;i<3;i++)
    {
        cin>>numberArray[i];
        sum2=sum2+numberArray[i];
    }
    cout<<sum-sum2<<endl;
    return 0;
}
