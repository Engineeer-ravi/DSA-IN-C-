#include <iostream>
using namespace std;
   int a=8; //globle variable
   void display(){
        cout<<a<<endl;
}
int main(){
    int a=5; //local variable
    cout<<a<<endl;
    display();
}