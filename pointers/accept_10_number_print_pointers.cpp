#include <iostream>
using namespace std;

int main()
{
  int numbers[10];    // Array to store 10 numbers
  int *ptr = numbers; // Pointer to the first element of the array

  // Ask the user to input 10 numbers
  cout << "Enter 10 numbers:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cin >> numbers[i]; // Store the input numbers in the array
  }

  // Print the numbers using pointers
  cout << "The numbers are:" << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << *(ptr + i) << " "; // Access the numbers using the pointer
  }

  cout << endl; // New line after printing the numbers
  return 0;     // End of the program
}
