#include <iostream>
#include <numeric>
#include <bits/stdc++.h>
#include "../../../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/experimental/numeric"
using namespace std;

int main() {

  int n;
  cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++)
    cin >> v[i];

  int gcd_val = v[0];
 

  for(int i = 1; i < n; i++)
    gcd_val = gcd(gcd_val, v[i]);
  
  cout << gcd_val;

  return 0;
}