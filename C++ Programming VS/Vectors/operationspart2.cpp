#include <bits/stdc++.h>

using namespace std;

int main() {
 
  int n, x;
  cin >> n >> x;
  vector<int> v(n);

  for(int i = 0; i < n; i++)
    cin >> v[i];

  replace(v.begin(), v.end(), x, x + 1);
 

  for(int i = 0; i < n; i++)
    cout << v[i] << " ";

  return 0;
} 