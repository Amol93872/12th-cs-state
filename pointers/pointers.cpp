#include <iostream>
using namespace std;

int main()
{
    int x;
    int *ptr;
    x = 10;
    ptr = &x;
    cout << "value of x= " << x << endl;
    cout << "content of ptr=" << *ptr << endl;
    cout << "address of ptr= " << ptr << endl;

    return 0;
}
