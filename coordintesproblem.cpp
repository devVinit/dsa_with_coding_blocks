#include <iostream>
using namespace std;

int main()
{
  int x = 0, y = 0;

  char ch;

  ch = cin.get();

  while (ch != '\n')
  {
    if (ch == 'N')
    {
      y++;
    }
    else if (ch == 'S')
    {
      y--;
    }
    else if (ch == 'E')
    {
      x++;
    }
    else if (ch == 'W')
    {
      x--;
    }

    ch = cin.get();
    /* code */
  }

  // lexicographically finding which one should come first
  if (x >= 0 and y >= 0)
  {
    // 1st quadrant;
    // E first then N
    // x first then y
    for (int i = 0; i < x; x++)
    {
      cout << "E";
    }

    for (int i = 0; i < y; y++)
    {
      cout << "N";
    }
  }
  else if (x <= 0 and y >= 0)
  {
    // 2st quadrant;
    // E first then N
    // x first then y
    for (int i = 0; i < x; x++)
    {
      cout << "E";
    }

    for (int i = 0; i < y; y++)
    {
      cout << "N";
    }
  }

  return 0;
}

// pending