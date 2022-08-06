#include <iostream>
using namespace std;

int getUnique(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int isUnique = 1;
    for (int j = 0; j < size; j++)
    {
      if (i != j && arr[i] == arr[j])
      {
        isUnique = 0;
        break;
      }
    }
    if (isUnique == 1)
    {
      cout << arr[i] << " ";
    }
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
  // int uniqueArr[];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  getUnique(arr, n);
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  return 0;
}