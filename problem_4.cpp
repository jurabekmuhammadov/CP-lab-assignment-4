#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;

  cout << "Enter the number: ";
  cin >> n;

  if (n > 0)
  {
    sum += n % 10;
    sum += n / 10;
  }

  cout << sum;

  if (sum % 5 == 0)
  {
    cout << "\n"
         << "Yes";
  }
  else
  {
    cout << "\n"
         << "No";
  }
}