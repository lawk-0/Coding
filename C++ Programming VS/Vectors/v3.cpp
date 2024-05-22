#include<bits/stdc++.h>

using namespace std;


int main() {
    int n,x,val;
    cin>>n>>x;
    vector<int> v;
    v.clear();
    for(int i=0;i<n;++i){
        cin>>val;
        v.push_back(val);
    }
    replace(v.begin(),v.end(),x,x+1);
    for(int i=0;i<v.size();++i)cout<<v[i]<<" ";
    // write your code here

    return 0;
}
/*
Last but not the least, the following vector operations/algorithms are also quite useful:

Replacing specific element in vector: replace()
replace() assigns new_value to all the elements in the range [first,last) that compare equal to old_value.
 vector<int> v = {2, 3, 5, 6, 3};
 replace(v.begin(), v.end(), 3, 8); // now, v = {2, 8, 5, 6, 8} as all old values 3 get replaced with 8
Merging two sorted vectors: merge()
  vector<int> v1 = {1, 2, 3};
  vector<int> v2 = {2, 2, 3, 4};
  vector<int> v(v1.size() + v2.size()); // size of merging vector must be equal to v1.size + v2.size()
  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";    // 1 2 2 2 3 3 4 
These functions work in O(N) time where N is the size of vector.

Task
Given N positive integers and a value x, write a program to replace all x with x + 1.
Input Format
The first line of input will contain two space separated integerx 
𝑁
N and 
𝑥
x, denoting the number of integers and a specific value, an integer.
Next line contains 
𝑁
N space separated integers.
Output Format
Replace all the occurrences of 
𝑥
x with 
𝑥
+
1
x+1 and print the new sequence of integers.
Constraints
1
≤
𝑁
,
𝑥
≤
100000
1≤N,x≤100000
All integers are positive and don't exceed 
100000
100000.
It is guaranteed that 
𝑥
x is present in the given sequence of integers.
Sample 1:
Input
Output
6 2
1 2 5 8 2 2
1 3 5 8 3 3
*/