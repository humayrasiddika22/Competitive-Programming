// Is Anagram

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string humu,mini;
    cin>>humu;
    cin>>mini;
    sort(humu.begin(),humu.end());
    sort(mini.begin(),mini.end());
    if (humu==mini)
        cout << "Yes"<< endl;
    else
        cout << "No"<< endl;
    return 0;
}
