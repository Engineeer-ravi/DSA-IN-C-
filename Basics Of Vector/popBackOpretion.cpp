#include<iostream>
#include<vector>
using  namespace std;
int main(){
    vector <int> r;
    r.push_back(3);
    r.push_back(4);
    r.push_back(2);
    r.push_back(9);
    r.push_back(8);
    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    
    r.pop_back();
    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }


}