#include <iostream>

using namespace std;

/*
    for loop is also an entry control loop.

    Syntax: 

        for(initialization expr; test expr; update expr)
        {
            // Body of the loop
            // Statements to be Executed
        }
*/

int main(int argc, char const *argv[])
{
    int i = 1;
    for (i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}
