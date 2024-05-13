#include<iostream>
using namespace std;
int main()
{
    int n,count=0,i;
    cout<<"enter any nuber"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        
            cout<<"it is a prime number value ";
        
        
        else
            cout<<"it is not a prime number value ";
    
        
    

    return 0;
}