#include <iostream>
using namespace std;

int main()
{
  int n;

  // Get the number of elements
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int arr[n];

  // Input elements into the array
  cout << "Enter " << n << " elements:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // Find the largest element
  int largest = arr[0]; // Assume the first element is the largest
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }

  // Display the largest element
  cout << "The largest element in the array is: " << largest << endl;

  return 0;
}
