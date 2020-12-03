#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s("HelloWorld.!");
    int ind = s.find("Wo");
    cout << "Wo Found at index : " << ind << endl; // Wo Found at index : 5
    s.replace(ind, 1, " Welcome");
    cout << s; // Hello Welcomeorld.!
    return 0;
}
