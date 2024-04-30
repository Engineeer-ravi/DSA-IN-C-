//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter  the ap "<<endl;
    cin>>n;
    for(i=4; i<=3*n-1; i=i+3 )
    {
        cout<<i<<" ";
    }
    return 0;
}