#include "StudentLinkedList.h"

using namespace std;

StudentLinkedList::StudentLinkedList() {
	headP = NULL;
	tailP = NULL;


}

void StudentLinkedList::printAllStudents() {
	StudentNode* curr;
	curr = headP;

	while (curr != NULL)
	{
		cout << "Student number: " << curr->getID() << endl;
		cout << "Student name: " << curr->getfirstName() << " " << curr->getlastName() << endl;
		cout << "Student Grade: " << curr->getfinalGrade() << endl;
		curr = curr->getNext();
		cout << endl;

	}
	cout << endl;

}

void StudentLinkedList::addStudent(string surname, string firstname, int studentNumber, int studentGrade) {
	StudentNode* newNode = new StudentNode(studentNumber, firstname, surname, studentGrade);

	if ( tailP == NULL)
	{
		tailP = headP = newNode;

	}
	else
	{
		tailP->setNext(newNode);
		tailP = newNode;

	}
	length++;
}

StudentNode* StudentLinkedList::findByName(string name, string surname) {
	StudentNode* curr;
	numberOfComparisons = 0;
	curr = headP;
	while (curr != NULL)
	{
		if ((curr->getfirstName() == name) && (curr->getlastName() == surname))
		{
			numberOfComparisons = numberOfComparisons + 1;
			cout << "Student found: " << endl;
			curr->print();
			cout << numberOfComparisons << " comparisons were made to find this name." << endl;
			cout << endl;
			return curr;

		}
		numberOfComparisons = numberOfComparisons + 1;
		curr = curr->getNext();
	}
	cout << "There was no student of this name found in the database." << endl;
	cout << "However " << numberOfComparisons << " comparisons were made before we reached this point" << endl;
	return curr;
}

StudentNode* StudentLinkedList::findByID(int _ID) {
	StudentNode* curr;
	curr = headP;
	while (curr != NULL)
	{
		if (curr->getID() == _ID)
		{
			return curr;

		}
		curr = curr->getNext();
	}
	cout << "There was no student of this ID found in the database." << endl;
	return curr;
}

bool StudentLinkedList::removeStudent(string name) {
	StudentNode* curr;
	StudentNode* prev;
	curr = headP;
	prev = headP;
	while (curr != NULL)
	{
		if (curr->getfirstName() == name)
		{
			if (curr == headP)
			{
				headP = curr->getNext();

			}
			else 
			{
				prev->setNext(curr->getNext());
				if (curr == tailP)
				{
					tailP = prev;
				}
			}

		delete curr;
		length--;
		return true; 
		}
		prev = curr;
		curr = curr->getNext();
	}
	cout << "There was no student of this name found in the database." << endl;
	return false;
}

bool StudentLinkedList::removeStudent(StudentNode* node) {
	StudentNode* curr;
	StudentNode* prev;
	curr = headP;
	prev = headP;
	while (curr != NULL)
	{
		if (curr == node)
		{
			if (curr == headP)
			{
				headP = curr->getNext();

			}
			else
			{
				prev->setNext(curr->getNext());
				if (curr == tailP)
				{
					tailP = prev;
				}
			}

			delete curr;
			length--;
			return true;
		}
		prev = curr;
		curr = curr->getNext();
	}
	cout << "There was no student of this name found in the database." << endl;
	return false;
}

bool StudentLinkedList::insertStudentAfter(StudentNode* _newNode, string _name) {
	StudentNode* curr;
	StudentNode* studentNamed = NULL;
	curr = headP;
	while (curr != NULL)
	{
		if ( curr->getfirstName() == _name)
		{
			studentNamed = curr;

		}
		curr = curr->getNext();
	}

	if (studentNamed == NULL)
	{
		cout << "There was no student of this name found in the database." << endl;
	}

	_newNode->setNext(studentNamed->getNext());
	studentNamed->setNext(_newNode);
	



	return true;
}

StudentLinkedList::~StudentLinkedList() {
	StudentNode* curr;
	StudentNode* prev;
	curr = headP;

	while (curr != NULL)
	{
		prev = curr;
		curr = curr->getNext();
		delete prev;

	}

}





