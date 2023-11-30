#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=a[i];
    cout<<sum<<endl;//use of endl is to provide new line
    cout<<"Hello world";
    return 0;
}
