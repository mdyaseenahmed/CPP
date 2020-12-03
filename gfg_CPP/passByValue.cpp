#include <iostream>

using namespace std;

/*
   Call By Value: It is a Parameter Passing Technique in which the values of actual parameters are copied to the function's formal parameters & the two types of parameters are stored in different memory locations. So any changes made inside function to those values are not reflected in the actual parameters.
*/

void func(int x)
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
