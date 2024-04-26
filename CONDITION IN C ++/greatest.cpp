#include<iostream>
using namespace std; 
int main()
{
    int a,b,c;
    cout<<"enter a number";
    cin>>a;
     cout<<"enter b number";
    cin>>b;
     cout<<"enter c number";
    cin>>c;
    if(a>b&&a>c){
        cout<<"a is greater";
    }
    else if (b>a&&b>c)
    {
        cout<<"b is greater";
    }
    else if (c>a&&c>b)
    {
        cout<<"c is greater";
    }
    
}

