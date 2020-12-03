#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int A[10] = {9, 87, 7, 45, 52, 65, 4, 23, -45, 5};
    int sizeOfArray = sizeof(A) / sizeof(A[0]);
    cout << "Size of the Array is : " << sizeOfArray << endl;
    // sort(starting_address, ending address);
    sort(A, A + 6); // Sorts first 6 elements of the Array.
    cout << "Sorted Elements: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }

    // Output:
    // Size of the Array is : 10
    // Sorted Elements:
    // 7 9 45 52 65 87 4 23 -45 5

    return 0;
}
