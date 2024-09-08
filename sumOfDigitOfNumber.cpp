#include<iostream>
using namespace std;

int sumOfDigits(int n) {
  int sum = 0;
  for (int i = 1; n > 0; i++) {
    int a = n%10;
    sum += a;
    n = n/10;
  }
  return sum;
}
int main() {
  cout << "Sum: " << sumOfDigits(497320) << endl;
  cout << "Sum: " << sumOfDigits(144545) << endl;
  return 0;
}