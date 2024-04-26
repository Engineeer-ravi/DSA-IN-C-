#include<iostream>
using namespace std;
int main()
{
    char choose;
    cout<<"Enter an alphabet ";
    cin>>choose;
    if((choose>='a'&& choose<='z') || (choose>='A'&& choose<='Z'))
    {
        cout<<"yes it is alphabet";
    }
    else{
        cout<<"it is not alphabet";
    }
}