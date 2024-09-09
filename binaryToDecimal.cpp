#include<iostream>
using namespace std;

int decToBin(int n) {
  int ans = 0, pow = 1;

  while(n > 0) {
    int rem = n % 10;

    ans += rem * pow;
    n = n / 10;
    pow *= 2;
  }
  return ans;
}

int main() {

  cout << decToBin(1010) << endl;
  
  return 0;
}