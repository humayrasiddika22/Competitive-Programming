// 236A. Boy or Girl
 
#include<iostream>
using namespace std;
int main()
{
    string name;
    int sum=0;
    cin>>name;
    for(int i=0;i<name.size();i++)
    {
        for(int j=i+1;j<name.size();j++)
        {
            if(name[i]==name[j])
            {
                sum=sum+1;
                break;
            }
        }
    }
    if((name.size()-sum)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}