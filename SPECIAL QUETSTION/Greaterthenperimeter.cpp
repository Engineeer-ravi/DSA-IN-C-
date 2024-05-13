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
        cout<<"area is greaterthan "<<endl;

    }
    else
    {
        cout<<"perimeter is greaterthan "<<endl; 
    }
    return 0;
    



}