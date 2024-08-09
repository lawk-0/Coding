#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);

  for(int i = 0; i < n; i++){
    cin >> nums[i];
  }

  vector<int> nums_copy = nums;

  next_permutation(nums.begin(), nums.end());
  for(int val: nums)
    cout << val << " ";
  cout << endl;

  prev_permutation(nums_copy.begin(), nums_copy.end());

  for(int val: nums_copy)
    cout << val << " ";

  return 0;
}
