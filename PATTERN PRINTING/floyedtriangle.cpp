/*PRINT THE FLOYD TRIANGLE PATTERN
1
2 3
4 5 6
7 8 9 10*/
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int number=1;
    for(r=1; r<=4; r++)
    {
        for(c=1; c<=r; c++)
        {
            cout<<number;
            number++;
            cout<<"  ";

        }
        cout<<endl;
    }
    return 0;
}