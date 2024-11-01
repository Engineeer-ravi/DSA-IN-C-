#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of student";
    cin>>n;
    int arr[n];
    cout<<"enter the mark of student";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //printing the index (roll number) who marks is less than 35
    for(int i=0;i<=n-1; i++){
        if(arr[i]<35){
            cout<<i<<endl;
        }
    }
}
