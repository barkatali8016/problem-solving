#include <iostream>
using namespace std;

int swapAlternateNumber(int arr[], int size)
{
  for (int i = 1; i < size; i += 2)
  {
    int temp = arr[i - 1];
    arr[i - 1] = arr[i];
    arr[i] = temp;
  }
  return 0;
}

int main()
{
  int n;
  cout << "Enter length =";
  cin >> n;
  cout << "Enter " << n << " element(s)";
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  swapAlternateNumber(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}