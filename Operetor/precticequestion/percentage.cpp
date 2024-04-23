#include<iostream>
using namespace std;
int main()
{
    float hindi, english, math, science, socialscience,percentege;
    cout<<"the marks of hindi ";
    cin>>hindi;
    cout<<"the marks of english ";
    cin>>english;
    cout<<"the marks of math ";
    cin>>math;
    cout<<"the marks of science ";
    cin>>science;
    cout<<"the marks of socialscience ";
    cin>>socialscience;
    percentege=(((hindi+english+math+science+socialscience)*100)/500);
    cout<<"answer "<<percentege<<"%";
    return 0;





}