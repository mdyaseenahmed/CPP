#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
    C++ string class internally uses char array to store characters but all the memory management & allocation & Null termination is managed by string class itself.
*/

int main(int argc, char const *argv[])
{
    string s("GeeksForGeeks");
    string s1 = "Hello world.!";

    cout << s << endl;
    cout << s1;
    return 0;
}
