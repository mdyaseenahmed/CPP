#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p1;
    char *p2;
    long *p3;

    // The size of pointer is always the same no matter of which data type it is.

    cout << "Size of Integer Pointer is: " << sizeof(p1) << endl;
    cout << "Size of Character Pointer is: " << sizeof(p2) << endl;
    cout << "Size of long Pointer is: " << sizeof(p3) << endl;

    return 0;
}
