#include<iostream>
using namespace std;
int main() {
  int principal, time, rate;
  cout << "Enter the principal: ";
  cin >> principal;
  cout << "Enter the time: ";
  cin >> time;
  cout << "Enter the rate: ";
  cin >> rate;

  cout << "Simple interest: " << (principal * time * rate) / 100;
  
  return 0;
}