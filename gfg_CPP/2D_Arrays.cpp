#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A[3][4] = {
        {7, 8, 9, 6},
        {3, 2, 5, 8},
        {2, 8, 4, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "A[" << i << "][" << j << "] = " << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
