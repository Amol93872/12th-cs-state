#include <iostream>
using namespace std;

int main()
{
  int num;             // Variable to store the number
  bool isPrime = true; // Flag to determine if the number is prime

  // Ask the user to enter a number
  cout << "Enter a number: ";
  cin >> num;

  // Check if the number is less than 2 (not prime)
  if (num <= 1)
  {
    isPrime = false; // Numbers less than or equal to 1 are not prime
  }

  // For loop to check if the number is divisible by any number other than 1 and itself
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    { // If the number is divisible by i, it's not prime
      isPrime = false;
      break; // Exit the loop if it's not prime
    }
  }

  // Output the result
  if (isPrime)
  {
    cout << num << " is a prime number." << endl;
  }
  else
  {
    cout << num << " is not a prime number." << endl;
  }

  return 0; // End of the program
}
