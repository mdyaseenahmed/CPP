#include <iostream>

using namespace std;

/*
    do while loop is an Exit control loop, which means that the condition is tested at the end or the control enters into the loop at least once 

    Syntax: 

        do {
            // Body of the Loop

            update_expression;
        }  while(condition);
*/

int main(int argc, char const *argv[])
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
