#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"enter your number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
     fact=fact*i;
         
    }
    cout<<"factorial number of  "<<n<<" is "<<fact;
   return 0;
}