#include <iostream>
using namespace std;

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b)
{
  while (b != 0)
  {
    int temp = b; // Temporary variable to hold the value of b
    b = a % b;    // Update b to the remainder of a divided by b
    a = temp;     // Update a to the old value of b
  }
  return a; // The GCD is stored in a after the loop
}

int main()
{
  int num1, num2;

  // Ask the user for two numbers
  cout << "Enter two numbers to find their GCD: ";
  cin >> num1 >> num2;

  // Call the gcd function and display the result
  int result = gcd(num1, num2);
  cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

  return 0; // End of the program
}
