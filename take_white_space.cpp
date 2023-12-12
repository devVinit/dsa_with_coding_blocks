#include <iostream>
using namespace std;

int main()
{
  char ch;

  int cnt = 0;

  ch = cin.get();

  while (ch != '$')
  {
    cnt++;
    // get white space
    // cin >> ch; wont take white space
    ch = cin.get();
  }

  cout << "Entered" << cnt << "\n";

  return 0;
}