#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char source[] = "Hello, World!";
  char destination[20]; // Make sure the destination array is large enough

  // Copy the string using strcpy()
  strcpy(destination, source);

  // Display the destination string
  cout << "Copied string: " << destination << endl;

  return 0;
}
