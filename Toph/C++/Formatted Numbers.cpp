//Formatted Numbers

#include <iostream>
using namespace std;
int main()
{
string Humu;
    getline(cin,Humu);
   int length=Humu.size();
   if(length<=3)
   {
       cout<<Humu<<endl;
   }
   else if(length==4)
   {
       cout<<Humu[0]<<","<<Humu[1]<<Humu[2]<<Humu[3];
   }
   else if(length==5)
   {
       cout<<Humu[0]<<Humu[1]<<","<<Humu[2]<<Humu[3]<<Humu[4];
   }
   else if(length==6)
   {
      cout<<Humu[0]<<Humu[1]<<Humu[2]<<","<<Humu[3]<<Humu[4]<<Humu[5];
   }
   else if(length==7)
   {
       cout<<Humu[0]<<","<<Humu[1]<<Humu[2]<<Humu[3]<<","<<Humu[4]<<Humu[5]<<Humu[6];
   }
   else if(length==8)
   {
       cout<<Humu[0]<<Humu[1]<<","<<Humu[2]<<Humu[3]<<Humu[4]<<","<<Humu[5]<<Humu[6]<<Humu[7];
   }
   else if(length==9)
   {
       cout<<Humu[0]<<Humu[1]<<Humu[2]<<","<<Humu[3]<<Humu[4]<<Humu[5]<<","<<Humu[6]<<Humu[7]<<Humu[8];
   }
    return 0;
}
