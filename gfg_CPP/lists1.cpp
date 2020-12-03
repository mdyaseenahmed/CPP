#include <bits/stdc++.h>

using namespace std;

void showList(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
        cout << *it << " -> ";
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    list<int> list1;

    for (int i = 1; i <= 5; i++)
    {
        list1.push_back(i * 4);
    }

    cout << "Contents of the List is : " << endl;
    showList(list1);

    cout << "The Size of the List is : " << list1.size() << endl;

    list1.reverse();
    cout << "Contents of the List After the Reversal : " << endl;
    showList(list1);

    list1.sort();
    cout << "Contents of the List After Sorting : " << endl;
    showList(list1);

    list1.remove(12);
    cout << "Contents of the List After Removing 12 : " << endl;
    showList(list1);

    list1.pop_front();
    cout << "Contents of the List After Deletion from Front : " << endl;
    showList(list1);

    list1.pop_back();
    cout << "Contents of the List After Deletion from Back : " << endl;
    showList(list1);

    list1.clear();
    cout << "The Size of the List After Clearing the contents of the list is : " << list1.size() << endl;

    return 0;
}

/*
+-------------+
|    Output:  |   
+-------------+

        Contents of the List is :
        4 -> 8 -> 12 -> 16 -> 20 ->
        The Size of the List is : 5
        Contents of the List After the Reversal :
        20 -> 16 -> 12 -> 8 -> 4 ->
        Contents of the List After Sorting :
        4 -> 8 -> 12 -> 16 -> 20 ->
        Contents of the List After Removing 12 :
        4 -> 8 -> 16 -> 20 ->
        Contents of the List After Deletion from Front :
        8 -> 16 -> 20 ->
        Contents of the List After Deletion from Back :
        8 -> 16 ->
        The Size of the List After Clearing the contents of the list is : 0
*/