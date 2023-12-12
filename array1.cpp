#include <iostream>
using namespace std;

int main()
{
  int a[5]; // max size 10^6

  // a[0] = 5;
  // a[1] = 10;
  // a[2] = 15;
  // a[3] = 20;
  // a[4] = 25;

  for (int i = 0; i < 5; i++)
  {
    a[i] = (i + 1) * 5;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}