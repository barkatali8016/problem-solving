#include <iostream>
using namespace std;

int findArrayInterSection(int array1[], int array2[], int n1, int n2)
{
  for (int i = 0; i < n1; i++)
  {

    for (int j = 0; j < n2; j++)
    {
      if (array1[i] == array2[j])
      {
        cout << array1[i] << " ";
      }
    }
  }
  return 0;
}
int main()
{

  cout << "Enter length of the first array = ";
  int n1;
  cin >> n1;
  cout << "Enter length of the second array = ";
  int n2;
  cin >> n2;
  int array1[n1];
  int array2[n2];
  for (int i = 0; i < n1; i++)
  {
    cin >> array1[i];
  }
  for (int j = 0; j < n2; j++)
  {
    cin >> array2[j];
  }
  findArrayInterSection(array1, array2, n1, n2);
  return 0;
}