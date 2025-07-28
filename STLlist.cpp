#include <iostream>
#include <list>
using namespace std;

void listOperations() {
    list<int> myList;

    // Insert
    myList.push_back(10);
    myList.push_front(5);
    myList.insert(next(myList.begin()), 7); // insert at second position

    // Traverse
    cout << "List elements: ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Remove
    myList.pop_front();
    myList.pop_back();

    // Size
    cout << "Size: " << myList.size() << endl;

    // Sort
    myList.push_back(12);
    myList.push_back(1);
    myList.sort();

    cout << "Sorted list: ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;

    // Reverse
    myList.reverse();
    cout << "Reversed list: ";
    for (int val : myList)
        cout << val << " ";
    cout << endl;
}
