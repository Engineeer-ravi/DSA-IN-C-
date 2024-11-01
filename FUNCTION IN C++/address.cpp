#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<"address of function in x"<<&x<<endl;
    cout<<"address of function in y"<<&y<<endl;
}    
int main(){
    int x=3;
    int y=5;
    cout<<"address x in main function"<<&x<<endl;
    cout<<"address y in main function"<<&y<<endl;
    fun(x,y);
}