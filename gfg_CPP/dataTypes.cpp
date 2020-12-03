#include <iostream>
using namespace std;

/*
    There are two types of Data Types.
        1. Primitive: These data types are built-in or predefined data types and can be used directly by the user to declare variables.
            Example: int, float, char, bool etc.

        2. Abstract: These data types are defined by user itself. Like, defining a class in C++ or a Structure.     
*/

// C++ program to print the size of data types.
int main(int argc, char const *argv[])
{
    cout << "Size of char Data type is : " << sizeof(char) << endl;
    cout << "Size of short int Data type is : " << sizeof(short int) << endl;
    cout << "Size of int Data type is : " << sizeof(int) << endl;
    cout << "Size of long int Data type is : " << sizeof(long int) << endl;
    return 0;
}
