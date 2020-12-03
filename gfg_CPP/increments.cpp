#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 10;
    cout << "X: " << x << "\nPre Increment X: " << ++x << "\nPost Increment X: " << x++;

    int a = 5;
    cout << "\na++ " << a++ << "\na : " << a << endl;

    return 0;
}
