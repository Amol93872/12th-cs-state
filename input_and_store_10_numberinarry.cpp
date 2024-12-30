// C++ Program: Input 10 Numbers, Store in Array, and Print Sum and Average
#include <iostream>
using namespace std;

int main()
{
  int numbers[10]; // Array to store 10 numbers
  int sum = 0;     // Variable to store the sum of numbers
  float average;   // Variable to store the average of numbers

  // Ask the user to input 10 numbers
  cout << "Enter 10 numbers:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> numbers[i]; // Store the input number in the array
  }

  // Calculate the sum of the array elements
  for (int i = 0; i < 10; i++)
  {
    sum += numbers[i]; // Add each number to the sum
  }

  // Calculate the average
  average = sum / 10.0; // Divide the sum by 10 to get the average

  // Display the sum and average
  cout << "Sum of the numbers: " << sum << endl;
  cout << "Average of the numbers: " << average << endl;

  return 0; // End of the program
}
