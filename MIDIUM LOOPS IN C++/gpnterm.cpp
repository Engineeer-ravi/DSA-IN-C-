//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main()
{
    int a=3,n;
    
    for(int i=3; i<=a; i++)
    {
        cout<<a<<"  ";
        a=a*4;
    }
    return 0;
}