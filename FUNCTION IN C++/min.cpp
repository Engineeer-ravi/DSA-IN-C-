#include<iostream>
using namespace std; 
int min(int a,int b){
    int x;
    if(a<b) x=a;
    else x=b;
    return x;

}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<"min no. is  :";
    cout<<min(a,b);

}