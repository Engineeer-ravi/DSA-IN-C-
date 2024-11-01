#include<iostream>
using namespace std;
int factorial(int n){
    int a=1;
    for(int i=2; i<=n; i++){
        a*=i;
    }
    return a;
}
int main(){
    int num;
    cout<<"Enter The Number :";
    cin>>num;
    cout<<"Factorial Number =";
    cout<<factorial(num);

}