#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0&&j%2!=0)
            {
                cout<<"  "<<j;
            }
        }cout<<endl;
    }

    return 0;
}