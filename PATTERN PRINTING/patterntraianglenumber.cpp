/*#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1; r<=4; r++)
    {
        for(c=1; c<=r; c++){
            cout<<c;
        }
        cout<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i;
    cout<<"enter";
    cin>>n;
    a=0;
    b=1;
    for(i=0;i<n;i=a+b)
    {
        cout<<" "<<i;
        a=b;
        b=i;
    }

    return 0;
}