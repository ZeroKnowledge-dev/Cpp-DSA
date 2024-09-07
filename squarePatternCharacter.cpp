#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter Your Number: ";
  cin >> n;

  for (int i = 0; i <= n; i++) {
    for (char j = 'A'; j <= n + 64; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}