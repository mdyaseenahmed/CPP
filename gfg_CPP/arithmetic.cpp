#include <iostream>

using namespace std;

/*
    Arithmetic Operators are of two types: 
        1. Unary operators: ++, --
        2. Binary operators: +, -, *, /, %
*/

int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    a++;
    cout << "Incrementing the value of a to " << a << "\n";
    b--;
    cout << "Decrementing the value of b to " << b << "\n";
    cout << "Sum of a and b is : " << (a + b) << endl;
    return 0;
}
