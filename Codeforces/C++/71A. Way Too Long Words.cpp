// 71A. Way Too Long Words
 
#include<iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        string word;
        cin>>word;
        int len = word.length();
        if(len>10)
        {
            int middle=len-2;
            cout<<word[0]<<middle<<word[len-1]<<endl;
        }
        else
            cout<<word<<endl;
    }
    return 0;
}

