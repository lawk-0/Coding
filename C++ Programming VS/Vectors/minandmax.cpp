#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  int max_val = *max_element(v.begin(), v.end());
  int min_val = *min_element(v.begin(), v.end());
  
  if(max_val % min_val == 0){
    cout << "YES";
  } else{
    cout << "NO";
  }

  return 0;
}
