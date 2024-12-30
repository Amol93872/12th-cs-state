#include <iostream>
using namespace std;

int main()
{
  int n, i = 1; // Initialize variables

  cout << "Enter a number: ";
  cin >> n;

  // Do-while loop to print numbers from 1 to N
  do
  {
    cout << i << " ";
    i++; // Increment the counter
  } while (i <= n);

  return 0;
}
