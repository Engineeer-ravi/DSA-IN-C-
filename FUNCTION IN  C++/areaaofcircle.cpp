#include<iostream>
using namespace std;
void area (float r) 
{
    float area;
    area =3.1415*r*r;
    cout<<"area of circle is  "<<area;
}
int main()
{
    float radious;
    cout<<"enter the radious of circle  ";
    cin>>radious;
    area(radious);
    return 0;
}