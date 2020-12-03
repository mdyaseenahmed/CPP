#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1("HelloWorld.!");
    cout << s1 << endl; // HelloWorld.!
    s1.erase(3, 4);
    cout << s1 << endl; // Helrld.!
    return 0;
}
