#include <iostream>

using namespace std;

/*
    Decision Making in Programming decides the direction of flow of program execution.

    1. if statement

        Syntax: 
            if(condition)
             {
                 // Statements to be executed if the condition is true
             }
    2. if-else statement         

        Syntax: 
            if(condition)
            {
                // Statements to be Executed if the condition is true
            }   
            else 
            {
                // Statements to be executed if the condition is false
            } 

    3. Nested if statement

        Syntax: 
            if(condition1)
            {
                // Executes when condition1 is true.
                if(condition2)
                {
                    // Executes when condition2 is true.
                }
            }        

    4. if else-if ladder

        Syntax: 
            if(condition)
            {
                statements;
            }
            else if(condition)
            {
                statements;
            }
            . 
            .
            .
            else
            {
                statementS;                
            }
*/

int main(int argc, char const *argv[])
{
    // int fruits = 2;

    // if (fruits < 3)
    // {
    //     cout << "Fruits are Less than 3" << endl;
    // }

    // fruits = 10;

    // if (fruits < 3)
    // {
    //     cout << "Fruits are Less than 3";
    // }
    // cout << "There are " << fruits << " Fruits.";

    // int fruits = 2;
    // if (fruits < 3)
    // {
    //     cout << "Fruits are Less than 3 " << endl;
    // }
    // else
    // {
    //     cout << "Fruits are More than 3" << endl;
    // }
    // cout << "Test: " << (3 < 3);    // 0

    // int fruits = 2, vegetables = 2;

    // if (fruits >= 2)
    // {
    //     if (vegetables < 3)
    //     {
    //         cout << "Fruits are Sufficient, & Vegetables are Not.!";
    //     }
    //     else
    //     {
    //         cout << "Fruits & Vegetables are Sufficient.!";
    //     }
    // }

    int i = 20;

    if (i == 10)
        cout << "The Value of i is 10" << endl;
    else if (i == 15)
        cout << "The Value of i is 15" << endl;
    else if (i == 20)
        cout << "The Value of i is 20" << endl;
    else
        cout << "I don't know the value of i " << endl;

    return 0;
}
