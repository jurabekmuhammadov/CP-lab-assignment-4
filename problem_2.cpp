#include <iostream>
using namespace std;

int main()
{
  int n;
  int oddSum = 0;
  int evenSum = 0;

  cout << "Enter the number n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      oddSum += i;
    }
    else
    {
      evenSum += i;
    }
  }

  cout << oddSum << " " << evenSum;

  return 0;
}