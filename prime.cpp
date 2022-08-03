#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;

  cout << "Enter a number = ";
  cin >> n;
  int isPrime = 1;
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      isPrime = 0;
      break;
    }
  }
  if (isPrime == 1)
  {
    cout << "Entered number is Prime.";
  }
  else
  {
    cout << "Entered number is not Prime.";
  }
  return 0;
}