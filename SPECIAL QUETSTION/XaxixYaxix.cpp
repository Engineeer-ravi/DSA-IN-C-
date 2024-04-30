#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the x axix digit"<<endl;
    cin>>x;
    cout<<"enter the y axix digit"<<endl;
    cin>>y;
    if(y!=0 && x==0)
    {
        cout<<"pont lies on origin"<<endl;
    }
    else if(x==0 && y==0)
    {
        cout<<"digit lies on origin"<<endl;

    }
    else
    {
        cout<<"digit lies between x and y axis "<<endl;
    }
    return 0;
}