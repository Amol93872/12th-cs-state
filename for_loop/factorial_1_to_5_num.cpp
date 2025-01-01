// C++ Program: Print Factorials of Numbers from 1 to 5
#include <iostream>
using namespace std;

int main()
{
  int factorial; // Variable to store the factorial result

  // Loop through numbers 1 to 5
  for (int i = 1; i <= 1000; i++)
  {
    factorial = 1; // Reset factorial to 1 for each number
    // Calculate factorial of i
    for (int j = 1; j <= i; j++)
    {
      factorial *= j; // Multiply factorial by j
    }

    // Print the factorial of the current number
    cout << "Factorial of " << i << " is: " << factorial << endl;
  }

  return 0; // End of the program
}
