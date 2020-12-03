#include <iostream>

using namespace std;

/*
   Call By Reference: It is a Parameter Passing Technique in which the Address or Reference of the actual parameter is passed to the function. So both the actual & formal parameters refers to the same locations. So any changes made inside functions are actually reflected in actual parameters.  
*/

void func(int &x)
{
    x = 30;
    cout << "The value of x in the function is : " << x << endl;
}

int main(int argc, char const *argv[])
{
    int x = 10;
    cout << "The value of x before the function call is : " << x << endl;
    func(x);
    cout << "The value of x After the function call is : " << x << endl;
    return 0;
}
