#include <iostream>

using namespace std;

int main()
{
  int n = 7;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << "*";
      }
      else if (i == j)
      {
        cout << "*";
      }
      else if (n - i - 1 == j)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }

    cout << "\n";
  }
  return 0;
}