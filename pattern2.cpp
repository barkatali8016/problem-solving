#include <iostream>
using namespace std;

int main()
{
  int n, k = 1;
  char ch = 'A';
  cout << "Enter a number: ";
  cin >> n;
  int i = 1, j;

  // **** 23 ****
  while (i <= n)
  {
    int k = 1;
    while (k <= n - i + 1)
    {
      cout << k;
      k++;
    }

    j = 1;
    int c = i - 1;
    while (j <= (i * 2) - 2)
    {
      cout << "*";
      j++;
    }
    int l = n - i + 1;
    while (l != 0)
    {
      cout << l;
      l--;
    }

    i++;
    cout << endl;
  }

  // // **** 22 ****
  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= n - i)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = 1;
  //   int c = i - 1;
  //   while (j <= (i * 2) - 1)
  //   {
  //     if (j <= i)
  //     {
  //       cout << j;
  //     }
  //     else
  //     {
  //       cout << c;
  //       c--;
  //     }
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 21 ****
  // int counter = 1;
  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= n - i)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << counter;
  //     j++;
  //     counter++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 21 ****

  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= i - 1)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = i;
  //   while (j <= n)
  //   {
  //     cout << j;
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 20 ****

  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= n - i)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << i;
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 19 ****

  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= i - 1)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = 1;
  //   while (j <= n - i + 1)
  //   {
  //     cout << i;
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 18 ****

  // while (i <= n)
  // {
  //   int k = 1;
  //   while (k <= i - 1)
  //   {
  //     cout << " ";
  //     k++;
  //   }

  //   j = 1;
  //   while (j <= n - i + 1)
  //   {
  //     cout << "*";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 17 ****

  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n - i + 1)
  //   {
  //     cout << "* ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 17 ****

  // while (n != 0)
  // {
  //   i = 1;
  //   while (i <= n)
  //   {
  //     cout << "* ";
  //     i++;
  //   }
  //   n--;
  //   cout << endl;
  // }

  // // **** 16 ****

  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n - i)
  //   {
  //     cout << " ";
  //     j++;
  //   }
  //   int k = 1;
  //   while (k <= i)
  //   {
  //     cout << "*";
  //     k++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 15 ****

  // while (i <= n)
  // {
  //   j = 1;
  //   char ch1 = 'A' + n - i;
  //   while (j <= i)
  //   {
  //     cout << (char)(ch1)
  //          << " ";
  //     j++;
  //     ch1++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 14 ****

  // while (i <= n)
  // {
  //   j = 1;
  //   char ch1 = 'A' + i - 1;
  //   while (j <= i)
  //   {
  //     cout << (char)(ch1)
  //          << " ";
  //     j++;
  //     ch1++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 13 ****
  // char ch1 = 'A' + n - 1;
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << (char)(ch1 - i + j)
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 12 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << (char)('A' + i + j - 2)
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 11 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << ch
  //          << " ";
  //     j++;
  //     ch++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 11 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << (char)('A' + i - 1)
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }
  // // **** 10 ****

  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n)
  //   {
  //     cout << (char)('A' + i + j - 2)
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 9 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n)
  //   {
  //     cout << ch
  //          << " ";
  //     j++;
  //     ch++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 8 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n)
  //   {
  //     char ch = 'A' + j - 1;
  //     cout << ch
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 7 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << i - j + 1
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 6 ****
  // while (i <= n)
  // {
  //   j = 0;
  //   while (j < i)
  //   {
  //     cout << i - j
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 6 ****
  // while (i <= n)
  // {
  //   j = 0;
  //   while (j < i)
  //   {
  //     cout << i + j
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 5 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   k = i;
  //   while (j <= i)
  //   {
  //     cout << k
  //          << " ";
  //     j++;
  //     k++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 4 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << k
  //          << " ";
  //     j++;
  //     k++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  // // **** 3 ****
  //   while (i <= n)
  //   {
  //     j = 1;
  //     while (j <= i)
  //     {
  //       cout << "*"
  //            << " ";
  //       j++;
  //     }
  //     i++;
  //     cout << endl;
  //   }

  // // **** 2 ****
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= i)
  //   {
  //     cout << i
  //          << " ";
  //     j++;
  //   }
  //   i++;
  //   cout << endl;
  // }

  //******* 1 ******
  // while (i <= n)
  // {
  //   j = 1;
  //   while (j <= n)
  //   {
  //     cout << k << " ";
  //     j++;
  //     k++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  return 0;
}