#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);

  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  for(int i = 0; i < m; i++)
    cin >> b[i];

  if(is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end())) {
    vector<int> v(n + m);
    merge(a.begin(), a.end(), b.begin(), b.end(), v.begin());
    for(int i = 0; i < n + m; i++)
        cout << v[i] << " ";
  } else{
    if(n > m){
        reverse(a.begin(), a.end());
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
    } else{
        reverse(b.begin(), b.end());
        for(int i = 0; i < m; i++)
            cout << b[i] << " ";
    }
  }
  
  return 0;
} 