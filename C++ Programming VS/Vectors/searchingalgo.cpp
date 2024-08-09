#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, l, u;
  cin >> n >> s >> l >> u;
  vector<int> nums(n);
  for(int i = 0; i < n; i++)
    cin >> nums[i];

  assert(is_sorted(nums.begin(), nums.end()));

  bool check_s = binary_search(nums.begin(), nums.end(), s); // we can use find() as sell

  if(check_s){
    cout << "YES ";
  } else{
    cout << "NO ";
  }

  auto lb = lower_bound(nums.begin(), nums.end(), l);
  auto ub = upper_bound(nums.begin(), nums.end(), u);
  cout << *lb << " " << *ub;

  return 0;
}
