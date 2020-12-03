#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[10] = {9, 87, 7, 45, 52, 65, 4, 23, -45, 5};
    int sizeOfArray = sizeof(A) / sizeof(A[0]);
    cout << "Size of the Array is : " << sizeOfArray << endl;
    // sort(starting_address, ending address);
    sort(A, A + sizeOfArray); // Sorts first 6 elements of the Array.

    // binary_search(starting_address, ending_address, key_to_be_searched);
    if (binary_search(A, A + sizeOfArray, 5))
    {
        cout << "The Element 5 is Found in the Array." << endl;
    }
    else
    {
        cout << "The Element 5 is Not Found in the Array." << endl;
    }

    if (binary_search(A, A + sizeOfArray, 44))
    {
        cout << "The Element 44 is Found in the Array." << endl;
    }
    else
    {
        cout << "The Element 44 is Not Found in the Array." << endl;
    }

    return 0;
}
