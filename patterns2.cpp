#include <iostream>

using namespace std;

int main()
{
  int i = 0;

  int number = 1;
  while (i < 5)
  {

    int j = i;
    while (j < 5)
    {
      cout << number;
      j++;
    }

    i++;
    number++;
    cout << "\n";
  }
  return 0;
}

// 11111
// 2222
// 333
// 44
// 5
