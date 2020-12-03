#include <iostream>

using namespace std;

/*
    Logical Operators: ( &&(and), ||(or), !(not))
*/

int main(int argc, char const *argv[])
{
    bool a = true, b = 0;
    cout << "a && b : " << (a && b) << endl;
    cout << "a || b : " << (a || b) << endl;
    cout << "!a : " << (!a) << endl;
    return 0;
}
