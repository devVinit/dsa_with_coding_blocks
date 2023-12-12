#include <iostream>
using namespace std;

// in bubble sort bigger one comes out first;

int main()
{
  int arr[] = {4, 5, 3, 2, 1};
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j <= n - 2 - i; ++j)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }

  return 0;
}
