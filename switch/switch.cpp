#include <iostream>
using namespace std;

int main()
{
  int day; // Variable to store the day number

  // Ask the user to enter a number for the day
  cout << "Enter a number (1-7) to get the day of the week: ";
  cin >> day;

  // Use a switch statement to determine the day
  switch (day)
  {
  case 1:
    cout << "Monday" << endl;
    break; // Exit the switch
  case 2:
    cout << "Tuesday" << endl;
    break;
  case 3:
    cout << "Wednesday" << endl;
    break;
  case 4:
    cout << "Thursday" << endl;
    break;
  case 5:
    cout << "Friday" << endl;
    break;
  case 6:
    cout << "Saturday" << endl;
    break;
  case 7:
    cout << "Sunday" << endl;
    break;
  default:
    // Handle invalid input
    cout << "Invalid input! Please enter a number between 1 and 7." << endl;
  }

  return 0; // End of the program
}
