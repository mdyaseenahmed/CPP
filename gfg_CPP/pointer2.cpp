#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 6;
    int *ptr;
    ptr = &a;
    cout << "Value of a is: " << *ptr << endl;
    cout << "Address of a is: " << ptr << endl;
    *ptr = 10;
    cout << "Value of a is: " << a << endl;
    return 0;
}
