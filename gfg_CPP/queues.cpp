#include <iostream>
#include <queue>
using namespace std;

int main(int argc, char const *argv[])
{
    queue<int> q;
    q.push(40);
    q.push(10);
    q.push(60);
    q.push(12);
    q.push(20);
    q.push(100);
    cout << "Size of the Queue is: " << q.size() << endl;   // 6
    cout << "Front of the Queue is: " << q.front() << endl; // 40
    cout << "Back of the Queue is: " << q.back() << endl;   // 100
    return 0;
}
