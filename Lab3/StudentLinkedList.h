#pragma once
#include <iostream>
#include <string>
#include "StudentNode.h"

using namespace std;




class StudentLinkedList {
private:
	StudentNode* headP;
	StudentNode* tailP;
	int length;


public:
	StudentLinkedList();
	~StudentLinkedList();
	void printAllStudents();
	StudentNode* findByName(string name);
	StudentNode* findByID(int _ID);
	void addStudent();
	bool removeStudent(string name); 
	bool removeStudent(StudentNode* node);
	bool insertStudentAfter(StudentNode* _newNode, string _name);



};