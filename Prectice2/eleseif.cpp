#include<iostream>
using namespace std;
int main()
{
    int Marks;
    cin>>Marks;
    cout<<"Enter The Number";
    if(Marks>80){
        cout<<"A";
    }
    else if(Marks>60){
        cout<<"B"

    }
    else if(Marks>40){
        cout<<"C";
    }
    else{
        cout<<"fail";
    }
    return 0;
}