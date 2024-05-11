#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(int r='A'; r<='D'; r++)
    {
        for(int c='A'; c<=r; c++)
        {
            cout<<char(c);
        }
        cout<<endl;
    }
    return 0;



}