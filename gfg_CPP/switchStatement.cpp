#include <iostream>

using namespace std;

/*
    switch statement:

        Syntax:

            switch (expression)
            {
            case constant-expression :
                code 
                break;

            default:
                break;
            }

    1. The expression provided in the switch should result in a constant value otherwise it would not be valid.
    2. Duplicate case values are not allowed.
    3. The Default Statement is optional. Even if the switch case statement do not have a default statement, it would run without any problem.
    4. The break statement is used inside the switch to terminate a statement sequence. When a break statement is reached, the switch is terminates, and the flow of control jumps to the next line following the switch statement.
    5. The break statement is optionl. If omitted, execution will continue on into the next case. The flow of control will fall through to subsequent cases until a break is reached.
    6. Nesting of a switch case is allowed.
*/

int main(int argc, char const *argv[])
{
    int a = 4, b = 2;
    int ch;

    cout << "Enter Your Choice: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "Sum: " << (a + b) << endl;
        break;

    case 2:
        cout << "Difference: " << (a - b) << endl;
        break;

    case 3:
        cout << "Product: " << (a * b) << endl;
        break;

    case 4:
        cout << "Quotient: " << (a / b) << endl;
        break;

    default:
        cout << "Invalid Choice.!";
        break;
    }
    return 0;
}
