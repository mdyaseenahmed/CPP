#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

/*
    Iterators are used to point at memory addresses of the containers. 
    They are primarily used in sequence of numbers, characters etc. 
    They Reduced the Complexity & Execution of the Program.
*/

int main(int argc, char const *argv[])
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator ptr;

    for (ptr = v.begin(); ptr != v.end(); ptr++)
        cout << *ptr << " ";

    return 0;
}
