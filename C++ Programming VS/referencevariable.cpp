#include<iostream>
using namespace std;

int main()
{
    float Shubh;
    cout<<"Enter the value of Shubh"<<endl;
    cin>>Shubh;
    float & S = Shubh;
    cout<<"The value of Shubh is "<<Shubh<<endl;
    cout<<Shubh<<endl;
    cout<<"The value of reference variable S is "<<S<<endl;
    cout<<S<<endl;
    return 0;
    
}