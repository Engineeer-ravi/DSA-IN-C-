#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(int r=4; r>=1; r--)
    {
        for(int c=1; c<=r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}