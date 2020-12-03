#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int Arr[] = {10, 15};
    int *p = Arr;
    // ++*p;
    // cout << "Arr[0]: " << Arr[0] << "\nArr[1]: " << Arr[1] << "\n*p : " << *p << endl;
    // Arr[0]: 11
    // Arr[1]: 15
    // *p : 11

    // *++p;
    // cout << "Arr[0]: " << Arr[0] << "\nArr[1]: " << Arr[1] << "\n*p : " << *p << endl;
    // Arr[0]: 10
    // Arr[1]: 15
    // *p : 15

    *p++;
    cout << "Arr[0]: " << Arr[0] << "\nArr[1]: " << Arr[1] << "\n*p : " << *p << endl;
    // Arr[0]: 10
    // Arr[1]: 15
    // *p : 15

    return 0;
}
