#include <iostream>
using namespace std;

class Student
{
private:
    string name; // Data member to store the student's name
    int rollNo;  // Data member to store the roll number

public:
    // Constructor: Initializes the student's name and roll number
    Student(string studentName, int studentRollNo)
    {
        name = studentName;
        rollNo = studentRollNo;
        cout << "Constructor called: Student object created." << endl;
    }

    // Member function to display student details
    void displayDetails()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }

    // Destructor: Called when the object is destroyed
    ~Student()
    {
        cout << "Destructor called: Student object destroyed." << endl;
    }
};

int main()
{
    // Creating a student object and initializing using the constructor
    Student student1("John Doe", 101);

    // Displaying student details
    student1.displayDetails();

    // Destructor will automatically be called at the end of the program
    return 0;
}
