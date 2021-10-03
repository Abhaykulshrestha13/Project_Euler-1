// C++ program to find the difference between sum of the squares of the first 100 natural numbers
//  and square of sum of first 100 natural number
#include <bits/stdc++.h>
using namespace std;
 
int square_diff(int n){
 
  int sum_of_squares, square_of_sum, result;

  // Sum of the squares of the first n natural numbers is
  sum_of_squares = (n * (n + 1) * (2 * (n + 1))) / 6;
    
  // Sum of n natural numbers
  int sum = (n * (n + 1)) / 2;

  // taking its square
  square_of_sum = sum * sum;
    
  // Differences between sum_of_squares and square_of_sum
  result = abs(sum_of_squares - square_of_sum);
    
  return result;
 
}
 
// main Code
int main()
{
    int n = 100;
    cout << square_diff(n);
    return 0;
     
}