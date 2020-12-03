#include <iostream>

using namespace std;

/*
    Relational Operators are used for the comparison of values of two operands. ( ==, <=, >=, !=, <, >)
*/

int main(int argc, char const *argv[])
{
    int a = 2, b = 3, c = 2;
    cout << "Are a and b Equal: " << (a == b) << "\n";
    cout << "Are a and c Equal: " << (a == c) << "\n";
    cout << "Is a smaller than b: " << (a < b) << "\n";
    cout << "Is b smaller than c: " << (b < c) << "\n";
    return 0;
}
