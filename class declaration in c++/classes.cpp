

In C++, a class is a blueprint for creating objects. It encapsulates data members (attributes) and member functions (methods) into a single unit, following the principles of object-oriented programming (OOP).

Syntax for Class Declaration:
```cpp
class ClassName {
    // Access specifier
    public:     
        // Data members
        // Member functions

    private:
        // Data members
        // Member functions
};
```

Key Components:
1. **`class` keyword**:
   Used to define a class.

2. **ClassName**:
   The name of the class (it should follow naming conventions, usually starting with an uppercase letter).

3. **Access specifiers**:
   Define the accessibility of class members:
   - `public`: Members are accessible outside the class.
   - `private`: Members are accessible only within the class.
   - `protected`: Members are accessible in derived classes (used in inheritance).

4. **Data members**:
   Variables that hold the properties or state of the class.

5. **Member functions**:
   Functions that operate on data members to perform tasks.

### Example of a Simple Class:
```cpp
#include <iostream>
using namespace std;

class Rectangle {
    // Private members (accessible only within the class)
    private:
        int length, width;

    // Public members (accessible outside)
}