#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number  " ;
    cin>>n;
while(n!=0)

{
    int r=n%10;
    sum=sum+r;
    n=n/10;
}
cout<<sum;
    return 0;
}