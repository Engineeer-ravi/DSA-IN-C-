#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the first side of triangle"<<endl;
    cin>>a;
    cout<<"enter the scond side of triangle"<<endl;
    cin>>b;
    cout<<"enter the third side of triangle"<<endl;
    cin>>c;
    if((a==b) && (b==c))
    {
        cout<<"this is an equiletral triangle"<<endl;

    }
    else if ((a==b) || (b==c) || (c==a))
    {
        cout<<"this is an isoscales triangle"<<endl;

    }
    else
    {
        cout<<"this is scalen triangle"<<endl;
    }
    return 0;

}