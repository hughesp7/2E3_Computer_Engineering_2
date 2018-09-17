#include<iostream>
#include<string>
#include "StudentLinkedList.h"
#include "StudentNode.h"

using namespace std;

int main() {
	StudentLinkedList l1;
	StudentNode s0( 1, "John", 100 );
	StudentNode* s1;
	string test;
	int counter = 1;

	s0.print();

	while (counter <= 10)
	{
		l1.addStudent();
		counter++;
	}
	l1.printAllStudents();

	cout << "Give the first name of a student you would like to remove from the list." << endl;
	cin >> test;
	s1 = l1.findByName(test);
	cout << "That students name and grade is..." << endl;
	s1->print();
	cout << "They will now be removed from the list" << endl;
	l1.removeStudent(s1);

	l1.printAllStudents();

	cout << "Give the first name of another student you would like to remove from the list." << endl;
	cin >> test;
	s1 = l1.findByName(test);
	cout << "That students name and grade is..." << endl;
	s1->print();
	cout << "They will now be removed from the list" << endl;
	l1.removeStudent(s1);

	l1.printAllStudents();

	cout << "What name would you like to insert this node after (but please dont pick a name in the tail or head node)." << endl;
	cin >> test;
	s1 = &s0;
	l1.insertStudentAfter(s1, test);
	
	l1.printAllStudents();
	cout << "After this we delete the linked list and print it out again to prove it is deleted." << endl;

	l1.~StudentLinkedList();



	l1.printAllStudents();




	return 0;
}