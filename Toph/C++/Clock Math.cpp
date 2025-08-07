// Clock Math

#include <iostream>
using namespace std;
int main()
{
    int HH,MM;
    cin>>HH>>MM;
    double angle ;
    angle =(360 - ((30 * HH) - (5.5 * MM)));
    if(angle <360-angle)
    {
        cout<<angle <<endl;
    }
    else
    {
        cout<<360-angle <<endl;
    }
    return 0;
}
