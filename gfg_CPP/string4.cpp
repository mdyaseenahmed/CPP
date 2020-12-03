#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s1("First");
    string s2("second");
    s1.append(s2);
    cout << s1 << endl; // Firstsecond
    // substr(a,b);
    string s3 = s1.substr(0, 7);
    cout << s3 << endl; // Firstse
    return 0;
}
