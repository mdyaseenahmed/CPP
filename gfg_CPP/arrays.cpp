#include <iostream>

using namespace std;

/*
    An Array is a collection of items stored at contigous memory locations.
    In C++ there is no out of Index out of Bounds error but the output is unexpected.
*/

int main(int argc, char const *argv[])
{
    int a[4];                    // Declaration
    int b[4] = {10, 20, 30, 40}; // Declaration & Initialization
    cout << b[0] << endl;
    cout << b[1] << endl;
    cout << b[2] << endl;
    cout << b[3] << endl;

    cout << b[-3] << endl;
    cout << b[5] << endl;

    int c[4];
    cout << "The Size of int is : " << sizeof(int) << endl;
    cout << "Address of the int array is: " << endl;
    cout << &c[0] << endl;
    cout << &c[1] << endl;
    cout << &c[2] << endl;
    cout << &c[3] << endl;
    return 0;
}
