#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y,a,temp;
	    cin>>X>>Y;
	    while(X)
	    {
	        if(X>Y)swap(X,Y);
            temp=X; 
	        X=(Y-X);
	        Y=temp;
	    }
	    cout<<Y<<endl;
	}
	return 0;
}