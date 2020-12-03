#include <iostream>

using namespace std;

/*
    1. iostream: iostream stands for standard input output stream. This header file contains definitions to objects like cin, cout, cerr etc.
    2. iomanip: iomanip stands for input output manipulators. The methods declared in this files are used for manipulating streams. This file contains definitions of setw, setprecision etc.
    3. fstream: This header file mainly describes the file system. This header file is used to handle the data being read from a file as input or data being written into the file as output.
*/

int main(int argc, char const *argv[])
{
    // "<<" is called as Insertion Operator.
    cout << "Hello World.!";
    // ">>" is called as Extraction Operator.
    int age;
    cout << "\nEnter Your Age : ";
    cin >> age;
    cout << "Your Age is : " << age << endl;
    // "cerr" is an unbuffered standard error stream. It is an Standard Error stream which is used to output the errors.
    cerr << "An Error Occured.!\n";
    // "clog" is a Buffered standard error stream. Here the error is first inserted into Buffer.
    clog << "This is an Error.!\n";
    return 0;
}
