#include "StudentLinkedList.h"

using namespace std;

StudentLinkedList::StudentLinkedList() {
	root = NULL;
	


}

void StudentLinkedList::printAllStudents() {
	StudentNode* curr;
	curr = root;

	while (curr != NULL)
	{
		cout << "Student number: " << curr->getID() << endl;
		cout << "Student name: " << curr->getfirstName() << " " << curr->getlastName() << endl;
		cout << "Student Grade: " << curr->getfinalGrade() << endl;
		//curr = curr->getNext();
		cout << endl;

	}
	cout << endl;

}

void StudentLinkedList::addStudent(string surname, string firstname, int studentNumber, int studentGrade) {
	StudentNode* newNode = new StudentNode(studentNumber, firstname, surname, studentGrade);
	StudentNode* prev = root;
	StudentNode* curr = root;

	if (root == NULL)
	{
		root = newNode;

	}
	else
	{

		while (curr != NULL)
		{
			prev = curr;
			if (newNode->getlastName() == curr->getlastName())
			{
				if (newNode->getfirstName() > curr->getfirstName())
				{
					curr = curr->getRight();
				}
				else
					curr = curr->getLeft();
			}
			else if (newNode->getlastName() > curr->getlastName())
			{
				curr = curr->getRight();
			}
			else
				curr = curr->getLeft();
		}
		if (newNode->getlastName() == prev->getlastName())
		{
			if (newNode->getfirstName() > prev->getfirstName())
			{
				prev->setRight(newNode);
			}
			else
			{
				prev->setLeft(newNode);
			}
		}
		else if (newNode->getlastName() > prev->getlastName())
		{
			prev->setRight(newNode);
		}
		else
		{
			prev->setLeft(newNode);
		}

	}


}



