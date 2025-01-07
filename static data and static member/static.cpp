#include <iostream>
using namespace std;

class Counter
{
private:
    static int count; // Static data member to track the count

public:
    Counter()
    {
        count++; // Increment count whenever an object is created
    }

    static int getCount()
    { // Static member function to access the static data
        return count;
    }
};

// Definition and initialization of the static data member
int Counter::count = 0;

int main()
{
    Counter obj1; // Create first object
    Counter obj2; // Create second object

    // Access static member function without an object
    cout << "Total objects created: " << Counter::getCount() << endl;

    return 0;
}
// Static Data Member:

// The count variable is declared static inside the class. It is shared among all objects of the class.
// It is initialized outside the class definition using int Counter::count = 0;.
// Static Member Function:

// The getCount function is a static member function, which can access only static data members.
// It is invoked using the class name (Counter::getCount()), not an object.
