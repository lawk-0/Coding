#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> nums(n);
  
  iota(nums.begin(), nums.end(), x);
  reverse(nums.begin(), nums.end());

  for(int val: nums){
    cout << val << " ";
  }

  return 0;
}
