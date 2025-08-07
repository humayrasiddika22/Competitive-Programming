// Big Factorials

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    unsigned long long int factN=1;
    cin>>number;
    for(int i=1;i<=number;++i)
    {
        factN=factN*i;
    }
    if(factN<10000)
        cout<<factN<<endl;
    else
    {
        std::cout << (factN/1000)%10;
        std::cout << (factN/100)%10;
        std::cout << (factN/10)%10;
        std::cout << (factN/1)%10;
    }
    return 0;
}
