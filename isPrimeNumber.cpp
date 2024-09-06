#include <iostream>
using namespace std;
int main()
{
  int n;
  bool isPrime = true;
  cout << "Enter the number: ";
  cin >> n;

  for (int i = 2; i * i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      break;
    }
  }

  if (isPrime)
  {
    cout << "The number is prime";
  }
  else
  {
    cout << "The number is not prime";
  }
  return 0;
}