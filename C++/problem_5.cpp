#include <iostream>
using namespace std;

// calculating greatest common divisor
long long gcd(long long a, long long b){
  while(a != 0){
    long long c = a;
    a = b % a;
    b = c;
  }
  return b;
}

// calculating least common multiple
long long lcm(long long a, long long b){
  return a * (b / gcd(a,b));
}

// main function
int main() {
  int k = 20;
  long long result = 1;
  for(int i = 2; i <= k; i++ )
    result = lcm(result, i);
  
  cout << result;
  return 0;
}