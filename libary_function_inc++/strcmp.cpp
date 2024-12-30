#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str1[] = "apple";
  char str2[] = "orange";

  // Compare the strings using strcmp()
  int result = strcmp(str1, str2);

  // Check the result of comparison
  if (result == 0)
  {
    cout << "Both strings are equal." << endl;
  }
  else if (result > 0)
  {
    cout << str1 << " is greater than " << str2 << endl;
  }
  else
  {
    cout << str1 << " is less than " << str2 << endl;
  }

  return 0;
}
