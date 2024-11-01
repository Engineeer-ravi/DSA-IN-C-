#include<iostream>
using namespace std;
int max(int x,int y){
        int a;
        if(x>y) a=x;
        else a=y;
        return a;
}
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
       cout<<"max no. is  :";
    cout<<max(x,y);

}