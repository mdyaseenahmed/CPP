#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int> q, q1;
    q.push(10);
    q.push(20);
    q.push(80);
    q.push(50);
    q.push(68);
    cout << "Top of the Queue: " << q.top() << endl; // 80

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

    return 0;
}
