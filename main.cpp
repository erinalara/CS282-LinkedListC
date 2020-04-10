#include "ModernLinkedList.h"
#include <iostream>

using namespace std;


int main() {
    ModernLinkedList ps;

    ps.PushFront(1);
    ps.PushFront(2);
    ps.PushFront(3);
    ps.PushFront(4);
    ps.PushFront(5);

	ps.PrintList();
	ps.PushBack(8);

	ps.PrintList();


	cout << "Popped back: ";
	ps.PopBack();
	ps.PrintList();

	cout << "Popped front: ";
	ps.PopFront();
	ps.PrintList();

	cout << endl;

	cout << "inserting " << endl;
    ps.Insert(3,7);
	ps.PrintList();

	cout << "removing at: 1" << endl;
	ps.RemoveAt(1);

    ps.PrintList();


	cout << "position 2: " << ps[2] << endl;
	ps.PrintList();

	cout << "Clearing list..." << endl;
    ps.Clear();
    ps.PrintList();


	return 0;
}
