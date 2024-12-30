#include <iostream>
using namespace std;

int main()
{
  int sum = 0; // Variable to store the sum

  // For loop to iterate from 1 to 100
  for (int i = 1; i <= 100; i++)
  {
    sum += i; // Add the current number to the sum
  }

  // Display the total sum
  cout << "The sum of all numbers between 1 and 100 is: " << sum << endl;

  return 0; // End of the program
}
