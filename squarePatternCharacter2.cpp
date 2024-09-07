#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter Your Number: ";
  cin >> n;

  char k = 'A';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << k << " ";
      k = k + 1;
    }
    cout << endl;
  }
  return 0;
}