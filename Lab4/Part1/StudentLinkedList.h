#pragma once
#include <iostream>
#include <string>
#include "StudentNode.h"

using namespace std;




class StudentLinkedList {
private:
	StudentNode* headP;
	StudentNode* tailP;
	int numberOfComparisons;
	int length;


public:
	StudentLinkedList();
	~StudentLinkedList();
	void printAllStudents();
	StudentNode* findByName(string name, string surname);
	StudentNode* findByID(int _ID);
	void addStudent(string surname, string firstname, int studentNumber, int studentGrade);
	bool removeStudent(string name); 
	bool removeStudent(StudentNode* node);
	bool insertStudentAfter(StudentNode* _newNode, string _name);



};