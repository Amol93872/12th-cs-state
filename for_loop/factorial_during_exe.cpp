#include <iostream>
using namespace std;

int main()
{
  int fact, n, i;
  cout << "number" << "\t" << "factorial" << endl;

  for (n = 1; n <= 10; n++)
  { // Fixed the loop increment for 'n'
    fact = 1;
    for (i = 1; i <= n; i++)
    { // Inner loop to calculate factorial
      fact = fact * i;
    }
    cout << n << "\t" << fact << endl;
  }

  return 0;
}
