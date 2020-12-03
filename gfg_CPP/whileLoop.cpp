#include <iostream>

using namespace std;

/*
    while loop is an Entry control loop. That is the control enter into the loop only if the condition of while loop is satisfied.
    
    Syntax:

        while (condition)
        {
            code
        }

*/

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 10)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}
