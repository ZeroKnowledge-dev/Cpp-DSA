#include<iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter Your Number: ";
  cin >> n;

  char ch = 'A';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    ch = 'A';

    for (int j = 1; j <= i + 1; j++) {
      cout << ch;
      ch = ch + 1;
    }

    ch = 'A';

    for (int j = i + 64; j >= 65; j--) {
      ch = 0 + j;
      cout << ch;
    }
    


    cout << endl;
  }
  return 0;
}