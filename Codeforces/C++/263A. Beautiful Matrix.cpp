// 263A. Beautiful Matrix
 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,row,column,arr[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                row=abs(3-(i+1));
                column=abs(3-(j+1));
            }
        }
    }
    cout<<row+column;
    return 0;
}