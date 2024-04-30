#include<iostream>
using namespace std; 
int main()
{
    int i;
    cout<<"print 1 to 100 odd number"<<endl;
    for(i=1; i<=100; i++){
        if(i%2!=0)
        {
            cout<<"odd number "<<i<<endl;
        }
    }
    return 0;
}