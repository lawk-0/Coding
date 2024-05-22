#include <bits/stdc++.h>

using namespace std;

long long mul(long long x, long long y){
    return 1LL * x * y;
}
int main() {

  int tests, n, val;
  cin >> tests;

  vector<long long> nums;

  while(tests--){
    cin >> n;
    nums.clear();
    int min_val = INT_MAX, max_val = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> val;
        max_val = max(max_val, val);
        min_val = min(min_val, val);
        nums.push_back(val);
    }
   
    vector<long long> p_sum(n);
    partial_sum(nums.begin(), nums.end(), p_sum.begin());
    long long p_sum_product = accumulate(p_sum.begin(), p_sum.end(), 1LL, mul);
    cout << p_sum_product << " ";
    if(p_sum_product % min_val == 0 && p_sum_product % max_val == 0){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
  }

  return 0;
} 
/*
Operations on Vector - Part II
Let's go through some more common vector operations/algorithms in C++.

Getting sum/prefix sum of vector:
Getting sum of elements of a vector: Using accumulate():
  int sum = accumulate(v.begin(), v.end(), 0); // sum = 18, the sum of elements with initial value 0

  // we can even perform any binary operation with accumulate(), not just addition.
  int mul(int x, int y) { // custom multiplication function
   return x * y;
  }
  int product = accumulate(v.begin(), v.end(), 1, mul); 
  // product = -420. after range, 1 is initial value of product and 
  // mul is our custom binary operation function (multiplication in this case).
Few things to note about accumulate() function:

It returns the result of accumulating all the values in the given range with specified initial value
The default operation is to add the elements up, but a different operation can be specified (as we can seen above).
The time complexity is linear in size.
Getting partial sum(prefix sum) of elements of a vector: Using partial_sum():

  vector<int> result1(v.size()); // creating a new vector with same size as v
  partial_sum(v.begin(), v.end(), result1.begin()); 
  // result1 = {2, 1, 4, 9, 11, 18}
  // Same as accumulate(), we can even pass a custom function with partial_sum()

  int myop (int x, int y) {
     return x+y+1;
  }
   
  vector<int> result2(v.size());
  partial_sum(v.begin(), v.end(), result2.begin(), myop); 
  // result2 = {2, 2, 6, 12, 15, 23}
Few things to note about partial_sum() function:
This function assigns a partial sum of the corresponding elements of a vector to every position of the second array.
The default operation is to add the elements up, but similar to accumulate() function, a different operation can be specified (as we can seen above).
Its time complexity is also linear in size.
Task
Given N positive integers, write a program to calculate the product of partial sums of the integers. Also find whether the product of partial sums is divisible by both the minimum and maximum of the given integers. See sample test for more clarity.
Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a positive integer 
𝑁
N - the number of integers.
The second life each test case contains 
𝑁
N space separated integers.
Output Format
For each test case, output on a new line two space separated value

the first value is product of partial sums.
After space, YES if final product of partial sum is divisible by both minimum and maximum integer, else NO.
Constraints
1
≤
𝑇
≤
100
1≤T≤100
1
≤
𝑁
≤
10
1≤N≤10
All integers are positive and don't exceed 
10
10.
Final product of partial sums won't exceed 
1
0
18
10 
18
 .
Sample 1:
Input
Output
1
5
2 3 5 6 7
36800 NO
Explanation:
Input has only 1 test case, a vector of integers of size 5: {2, 3, 5, 6, 7}
minimum value = 2, maximum value = 7
The partial sum : {2, 5, 10, 16, 23}
product of partial sum = 2 * 5 * 10 * 16 * 23 = 36800 which is divisible by 2 but not divisible by 7.

Did you like the problem?

*/