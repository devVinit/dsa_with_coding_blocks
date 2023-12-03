// incomplete

#include <iostream>

using namespace std;

int main()
{
  // cin >> number;
  int number = 10;

  int m = number / 2;

  for (int i = 0; i < m; i++)
  {
    for (int j = i; j < m; j++)
    {
      cout << "*";
    }

    for (int j = m; j > m - i; j--)
    {
      cout << " ";
    }

    for (int j = m; j > m - i; j--)
    {
      cout << " ";
    }

    for (int j = i; j < m; j++)
    {
      cout << "*";
    }

    cout << "\n";
  }

  for (int i = m - 1; i > 0; i--)
  {
    for (int j = i; j < m; j++)
    {
      cout << "*";
    }

    for (int j = m; j > m - i; j--)
    {
      cout << " ";
    }

    for (int j = m; j > m - i; j--)
    {
      cout << " ";
    }

    for (int j = i; j < m; j++)
    {
      cout << "*";
    }

    cout << "\n";
  }
  return 0;
}
