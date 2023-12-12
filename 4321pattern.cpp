#include <iostream>

using namespace std;

int main()
{

  int n = 7;
  int number = 4;
  bool revere = false;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
      {
        cout << number;
      }
      else if (i == j)
      {
        number--;
        cout << number;
      }
      else if (n - i - 1 == j)
      {
        cout << number;
      }
      else
      {
        cout << number;
      }
    }

    cout << "\n";
  }

  return 0;
}

// expected output

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444