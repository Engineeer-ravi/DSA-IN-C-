#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    if((num%3==0) && (num%5==0))
    {
        cout<<"divisible by 5 and 3";
    }
    else{
        cout<<"it is not divisible ";
    }
    return 0;
}