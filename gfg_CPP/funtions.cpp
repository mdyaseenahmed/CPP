#include <iostream>

using namespace std;

/*
    A function is a set of statements that performs some specific task & produce the output. 

    Syntax: 
        return_type function_name (parameter list seperated by commas)
        {
            // body of the function
            // Statements to be executed
        }
*/

int maxOfTwo(int a, int b)
{
    return (a > b) ? a : b;
}

int minOfTwo(int, int);

int main(int argc, char const *argv[])
{
    int x, y, max, min;
    cout << "Enter Two Integers: \n";
    cin >> x >> y;
    max = maxOfTwo(x, y);
    min = minOfTwo(x, y); // Here, x & y are Actual parameters.
    cout << "Maximum is : " << max << endl;
    cout << "Minimum is : " << min << endl;
    return 0;
}

int minOfTwo(int a, int b) // Here, a & b are Formal parameters.
{
    return (a < b) ? a : b;
}