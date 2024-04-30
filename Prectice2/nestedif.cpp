//nested if matlab hum apne if else statment ke andar aur if else stetment bana sakte hai
#include<iostream>
using namespace  std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>33){
        if(marks>80)
        cout<<"highest";
        else{
        cout<<"pass";
        }

    }
    else{
        cout<<"fail";
    }
    
    return 0;
}