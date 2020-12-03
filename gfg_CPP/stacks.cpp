#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(10);
    s.push(40);
    s.push(60);
    s.push(12);
    s.push(20);
    s.push(100);
    cout << "Size of the Stack is: " << s.size() << endl; // 6
    cout << "Top of the Stack is: " << s.top() << endl;   // 100
    return 0;
}
