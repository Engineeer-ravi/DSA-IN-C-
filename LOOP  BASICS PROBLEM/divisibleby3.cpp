#include<iostream>
using namespace std;
int main()
{
    int i=1, b=3;
    cout<<"these number are divisible by 3"<<endl;
    cout<<endl;

    for( i=1; i<=100; i++){

        if(i%3==0){

            cout<<b<<" is divisible by "<<i<<endl;
        }
    }
    return 0;
}