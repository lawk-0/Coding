#include <bits/stdc++.h>
using namespace std;

pair<int, string> A[3];
int T;

int main() {
	
	cin >> T;
	while(T--)
	{
	    cin >> A[0].first >> A[1].first >> A[2].first;
	    A[0].second = "ALICE";
	    A[1].second = "BOB";
	    A[2].second = "CHARLIE";
	    
	    sort(A,A+3);
	    cout << A[0].second << endl;
	}

	return 0;
}