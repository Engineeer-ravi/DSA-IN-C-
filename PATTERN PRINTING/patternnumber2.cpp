/*Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4*/

#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(int r=1; r<=4; r++)
    {
        for(int c=1; c<=4; c++ )
        {
            cout<<r;
        }
        cout<<endl;
    }
}