#include <bits/stdc++.h>
using namespace std;

/*
    1. Lists are sequence container that allow no contigous memory allocation.
    2. As compare to vectors lists have slow traversal.
    3. Once a position has been found insertion & Deletion are Quick.
    4. Normally when we talk about lists we talk about a Doubly linked List. Declaring a list is similar to other container in CPP.
*/

void showList(list<int> l)
{
    list<int>::iterator it1;
    for (it1 = l.begin(); it1 != l.end(); it1++)
    {
        cout << *it1 << " -> ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    list<int> list1, list2;
    for (int i = 1; i <= 5; i++)
    {
        list1.push_back(i * 3);
        list2.push_front(i * 3);
    }

    cout << "Contents of the First List is: \n";
    showList(list1);
    cout << "Contents of the Second List is: \n";
    showList(list2);

    return 0;
}
