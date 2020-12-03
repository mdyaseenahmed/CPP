#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {10, 20, 30, 40};
    int *pt;
    pt = a;
    for (int i = 0; i < 4; i++)
    {
        cout << "The Element at Index  " << i << " is: " << *pt << endl;
        pt++;
    }

    return 0;
}
