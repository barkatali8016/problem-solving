#include <iostream>
#include <math.h>
using namespace std;

void reverseArr(int arr[], int size)
{
  int n = size;
  int i = 0;

  while (n > 0)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
    n = n - 2;
    i++;
  }
}
void reverseArr2(int arr[], int size)
{
  int start = 0;
  int end = size - 1;

  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
int main()
{
  int n;
  cout << "Enter size =  ";
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }

  // reverseArr(array, n);
  reverseArr2(array, n);

  for (int i = 0; i < n; i++)
  {
    cout << array[i] << ' ';
  }

  return 0;
}