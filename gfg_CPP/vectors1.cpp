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

    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
