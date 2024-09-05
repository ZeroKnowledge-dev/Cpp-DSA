#include<iostream>
using namespace std;
int main() {
  int num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  if (num1 > num2) {
    cout << "The maximum number is: " << num1; cout << " And The minimum number is: " << num1;
  } else {
    cout << "The maximum number is: " << num2;
  }
  return 0;
}