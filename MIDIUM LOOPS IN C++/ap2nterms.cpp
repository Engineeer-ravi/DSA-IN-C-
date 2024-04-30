//Display this AP - 100,97,94,..upto all terms which are positive. N 
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the ap"<<endl;
    cin>>n;
    for(i=100; i>100-(n*3); i=i-3)
    {
        cout<<i<<" ";
    }
    

}