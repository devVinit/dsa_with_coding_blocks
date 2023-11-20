// problem 1: patterns
#include <iostream>

using namespace std;

int main()
{
    int number = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 == 0)
            {
                cout << number;
                number++;
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}

// output

// 1
// 2*
// 3*4
// 5*6*
// 7*8*9