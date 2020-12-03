#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    for (int i = 1; i <= 5; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator ptr = v.begin();

    // Using advance() to increment iterator position points to 4
    advance(ptr, 3);

    // Displaying iterator Position
    cout << "The Position of the Iterator after Advancing is : " << *ptr << endl;

    return 0;
}
