//Whenever we pass any array inside any function, it is called pass by reference.
#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=7;
}
int main()
{
   int arr[4]={5,6,8,9};
   display(arr); 
   change(arr);
   display(arr); 
}