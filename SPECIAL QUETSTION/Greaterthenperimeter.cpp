#include<iostream>
using namespace std;
int main()
{
    int length, breadth, area ,perimeter;
    cout<<"enter the length ";
    cin>>length;
    cout<<"enter the breadth ";
    cin>>breadth;
    area=length*breadth;
    perimeter=2*length+breadth;
    if(area>perimeter)
    {
        cout<<"area is greater "<<endl;

    }
    else
    {
        cout<<"perimeter is greater "<<endl; 
    }
    return 0;
    



}