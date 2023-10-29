#include <iostream>
using namespace std;

int main()
{
  int n;

  cout << "Enter the number n: ";
  cin >> n;

  for (int i = 1; i <= n; i += 2)
  {
    cout << i << " ";
  }

  cout << "\n";

  for (int i = 2; i <= n; i += 2)
  {
    cout << i << " ";
  }

  return 0;
}