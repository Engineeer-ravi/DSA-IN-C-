#include<iostream>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter the number: ";
    cin>>n;
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    return 0;

}