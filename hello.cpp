#include <iostream>
using namespace std;

int main()
{
  int a = 100;
  if (a)
  {
    cout << "First" << a << endl;
    int a = 20;
    cout << "Second" << a << endl;
  }
  return 0;
}