#include <iostream>
using namespace std;
int main()
{
  int n;

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << i << endl;
  }

  // while
  int count = 1;
  while (count <= n)
  {
    cout << count << endl;
    count++;
  }

  return 0;
}