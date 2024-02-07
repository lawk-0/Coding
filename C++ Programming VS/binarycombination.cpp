#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(x<2){
            cout<<0<<endl;
            continue;
        }
        else if(x==(y+1)){
            cout<<1<<endl;
            continue;
        }
        else{
            cout<<y/(x-1)<<endl;
            continue;
        }
    }	// your code goes here
}
//011101110