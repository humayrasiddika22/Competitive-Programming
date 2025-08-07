// 4A. Watermelon

#include<iostream>
using namespace std;
int main()
{
    int weight,number;
    cout<<"Enter the weight of Watermelon: ";
    cin>>weight;
    number=weight/2;
    cout<<"If the division of watermelon into two parts and each of them weighing even number print YES otherwise print NO"<<endl;
    if(weight%2==0)
    {
        if(number%2==0 || (number>2 && (number+1)%2==0))
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
    return 0;
}
