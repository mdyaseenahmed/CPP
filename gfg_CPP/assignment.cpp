#include <iostream>

using namespace std;

/*
    Assignment Operator is used to assign a value to a variable.( +=, -=, *=, /=)
*/

int main(int argc, char const *argv[])
{
    int a = 3;
    a += 4;
    cout << "The Value of a : " << a << endl;
    a -= 4;
    cout << "The Value of a : " << a << endl;
    a *= 4;
    cout << "The Value of a : " << a << endl;
    a /= 4;
    cout << "The Value of a : " << a << endl;
    return 0;
}
