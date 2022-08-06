#include <iostream>
using namespace std;
int findDuplicateElements(int arr[], int n)
{

  for (int i = 0; i < n; i++)
  {
    int isDuplicate = 0;
    for (int j = 0; j < n; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        isDuplicate = 1;
        break;
      }
    }
    if (isDuplicate)
    {
      cout << arr[i] << " ";
    }
  }
  return 0;
}

int main()
{

  cout << "Enter the length= ";
  int n;
  cin >> n;
  cout << "Enter " << n << " element (s) ";
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  findDuplicateElements(arr, n);
  return 0;
}