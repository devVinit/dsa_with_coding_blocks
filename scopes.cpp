#include <iostream>
using namespace std;

int a = -1000;

int main()
{
  cout << a << "\n";

  if (a > 1)
  {
    cout << a << "\n";
    // global a
    cout << ::a << "\n";
    ::a += 10000;
    a++;
  }
}