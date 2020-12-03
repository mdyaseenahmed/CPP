#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }

    cout << "The Size of the Vector: " << v.size() << endl;         // 5
    cout << "The Capacity of the Vector: " << v.capacity() << endl; // 8
    cout << "The Max Size of the Vector: " << v.max_size() << endl; // 536870911

    if (v.empty())
        cout << "Vector is Empty.!";
    else
        cout << "Vector is Not Empty.!";

    cout << "First Element : " << v.front() << endl;       // 0
    cout << "Last Element : " << v.back() << endl;         //  4
    cout << "Element at Index 3 is : " << v.at(3) << endl; //3

    return 0;
}
