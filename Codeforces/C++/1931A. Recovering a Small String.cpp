// 1931A. Recovering a Small String

#include<iostream>
using namespace std;
int main()
{
    int number,word_number;
    string alphabets="abcdefghijklmnopqrstuvwxyz";
    cout<<"Enter the number of words: ";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cout<<"\nWord "<<i<<" number is: ";
        cin>>word_number;
        if(word_number<=28)
        {
            int m=word_number-2;
            cout<<"The word is :"<<alphabets[0]<<alphabets[0]<<alphabets[m-1]<<endl;
        }
        else if(word_number>28)
        {
            int m=word_number-26;
            if(m<27)
            {
                int mm=m-1;
                cout<<"The word is :"<<alphabets[0]<<alphabets[mm-1]<<alphabets[26-1]<<endl;
            }
            else if(m>26)
            {
                int mm=m-26;
                if(mm<26)
                {
                    cout<<"The word is :"<<alphabets[mm-1]<<alphabets[26-1]<<alphabets[26-1]<<endl;
                }
                else
                    cout<<"The word is :"<<alphabets[26-1]<<alphabets[26-1]<<alphabets[26-1]<<endl;
            }
        }
    }
    return 0;
}
