#include <iostream>
using namespace std;

int main()
{
  int terms = 15;                  // Set the number of terms to 15
  int first = 0, second = 1, next; // Initialize the first two terms

  // Print the first two terms of the Fibonacci series
  cout << "Fibonacci series of 15 terms: " << first << " " << second << " ";

  // For loop to generate the Fibonacci series from the 3rd term to the 15th term
  for (int i = 3; i <= terms; i++)
  {
    next = first + second; // Calculate the next term
    cout << next << " ";   // Print the next term
    first = second;        // Update the first term
    second = next;         // Update the second term
  }

  cout << endl; // New line after the series
  return 0;     // End of the program
}
