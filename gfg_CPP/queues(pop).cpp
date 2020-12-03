#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q, q1;
    q.push(10);
    q.push(40);
    q.push(60);
    q.push(12);
    q.push(20);
    q.push(100);
    cout << "Size of the Queue is: " << q.size() << endl; // 6
    cout << "Top of the Queue is: " << q.front() << endl; // 100
    q1 = q;
    while (!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop();
    }
    return 0;
}
