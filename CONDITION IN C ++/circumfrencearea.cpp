#include<iostream>
using namespace std;
int main()
{
    float r,cir,area;
    cout<<"Enter the radious "<<endl;
    cin>>r;
    cir=2*3.14*r;
    area=3.14*r*r;
    if(cir>area){
        cout<<"area is greater then";
    }
    else if(cir<area){
        cout<<"circumfrence is greater then";
    }
    else{
        cout<<"both are equal";
    }
    return 0;
}