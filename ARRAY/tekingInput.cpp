#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Size Of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<endl;
    }

}