// 71A. Way Too Long Words

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number of words: ";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        string word;
        cout<<"Enter the word: ";
        cin>>word;
        int len = word.length();
        if(len>10)
        {
            int middle=len-2;
            cout<<"The length of the word is: "<<len<<"\nThe word is: "<<word[0]<<middle<<word[len-1]<<"\n\n";
        }
        else
            cout<<"The length of the word is: "<<len<<"\nThe word is: "<<word<<"\n\n";
    }
    return 0;
}

