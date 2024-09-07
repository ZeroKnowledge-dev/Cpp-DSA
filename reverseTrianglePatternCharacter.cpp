#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter Your Number: ";
  cin >> n;

  char ch = 'A';

  for (int i = 0; i < n; i++) {
    for (int j = i + 65; j >= 65; j--) {
      ch = 0 + j;
      cout << ch << " ";
    }
    cout << endl;
  }
  return 0;
}