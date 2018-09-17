#pragma once
#include <iostream>
#include <string>
#include "StudentNode.h"

using namespace std;




class StudentLinkedList {
private:
	StudentNode* root;
	int numberOfComparisons;
	int length;
	int counter = 0;
	StudentNode* findStudent(StudentNode* s, string firstname, string lastname){
		if (s == root)
		{
			numberOfComparisons = 0;
		}
		if (s == NULL)
		{
			return NULL;
		}
		if (s->getfirstName() == firstname && s->getlastName() == lastname)
		{
			numberOfComparisons++;
			cout << "Student found: " << s->getfirstName() << "	" << s->getlastName() << "	" << s->getID() <<" Grade:: "<< s->getfinalGrade()<< endl;
			cout << numberOfComparisons << " comparisons were made before this student was found." << endl;
			return s;
		}
		numberOfComparisons++;
		if (s->getlastName() == lastname)
		{
			if (s->getfirstName() < firstname)
			{
				return findStudent(s->getRight(), firstname, lastname);
			}
			else
			{
				return findStudent(s->getLeft(), firstname, lastname);
			}
		}
		else if (s->getlastName() < lastname)
		{
			return findStudent(s->getRight(), firstname, lastname);
		}
		else
		{
			return findStudent(s->getLeft(), firstname, lastname);
		}

		

}
	
	void printAll(StudentNode* curr) {
		{
			if (curr) { 
				printAll(curr->getLeft() ); 
				cout << curr->getlastName() <<"		"<<curr->getfirstName() << endl; 
				printAll( curr->getRight() ); 
			} 
		}
	}
public:
	StudentLinkedList();
	void printAllStudents();
	StudentNode* findS(string firstname, string lastname) {  
		if (findStudent(root, firstname, lastname) == NULL)
		{
			cout << numberOfComparisons << " comparisons were made." << endl;
			cout << "This student was not found"<<endl;
		}
		else return findStudent(root, firstname, lastname);
	}
	void addStudent(string surname, string firstname, int studentNumber, int studentGrade);
	void printTree() { return printAll(root); }
		



};