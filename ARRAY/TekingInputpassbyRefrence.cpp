#include<iostream>
using namespace std;
void display(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=7;
}
int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    display(arr, n);
    
}