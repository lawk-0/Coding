#include <bits/stdc++.h>

using namespace std;


int main() {

  int tests, n, val;
  cin >> tests;

  vector<int> nums;

  while(tests--){
    cin >> n;
    nums.clear();
    for(int i = 0; i < n; i++){
        cin >> val;
        nums.push_back(val);
    }
    bool has_duplicate = false;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] == nums[j])
                has_duplicate = true;
        }
    }
    if(has_duplicate){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
  }

  return 0;
} 