#include<string>
#include<iostream>
#include "StudentNode.h"

using namespace std;

int StudentNode::numStudents = 1;

StudentNode::StudentNode() {
	ID = numStudents;
	numStudents++;
	cout << "Enter the next student's firstname and lastname." << endl;
	cin >> firstName>> lastName;
	cout << "What grade did this student receive?" << endl;
	cin >> finalGrade;
	nextS = NULL;
	cout << endl;

}

StudentNode::StudentNode(int _ID, string _firstName, string _lastName, double _finalGrade)
{
	ID = _ID;
	firstName = _firstName;
	lastName = _lastName;
	finalGrade = _finalGrade;
}

void StudentNode::print() {
	cout << "Student number: " << ID << endl;
	cout << "Student name: " << firstName <<" "<< lastName<< endl;
	cout << "Student grade: " << finalGrade << endl;

}
