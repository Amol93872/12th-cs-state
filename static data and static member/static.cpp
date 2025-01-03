#include <iostream>
using namespace std;

class Counter
{
private:
    static int count; // Static data member

public:
    Counter()
    {
        count++; // Increment count whenever an object is created
    }

    ~Counter()
    {
        count--; // Decrement count whenever an object is destroyed
    }

    static void showCount()
    { // Static member function
        cout << "Current count: " << count << endl;
    }
};

// Define and initialize the static data member
int Counter::count = 0;

int main()
{
    Counter::showCount(); // Call static function without an object

    Counter obj1, obj2;
    Counter::showCount(); // Count after creating two objects

    {
        Counter obj3;
        Counter::showCount(); // Count after creating a third object
    } // obj3 goes out of scope and is destroyed

    Counter::showCount(); // Count after obj3 is destroyed

    return 0;
}
// Static Data Member (count):

// Shared among all objects of the Counter class.
// Updated whenever an object is created or destroyed.
// Static Member Function (showCount):

// Displays the value of the static data member count.
// Accessed directly using the class name (Counter::showCount()).
