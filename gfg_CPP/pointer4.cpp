#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4};
    int *pt;
    pt = a;
    cout << "The Element at Index 0 is: " << *pt << endl;
    cout << "The Element at Index 2 is: " << (*pt + 2) << endl;
    return 0;
}
    