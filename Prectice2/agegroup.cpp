#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter yuor age"<<endl;
    cin>>age;
    if(age<12){
        cout<<"chaild"<<endl;
    }
    else if(age>18){
        cout<<"adult"<<endl;
    }
    else{
        cout<<"teenager"<<endl;
    }
    return 0;
}