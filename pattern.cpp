#include <iostream>

using namespace std;
int displayPattern(int row, int column)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cout << i << "";
    }
    cout << "\n";
  }

  return 0;
}
int main()
{
  int row, column;
  cout << "Enter the number of row: ";
  cin >> row;
  cout << "Enter a number of column: ";
  cin >> column;
  displayPattern(row, column);
  return 0;
}