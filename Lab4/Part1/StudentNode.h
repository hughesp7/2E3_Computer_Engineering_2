#pragma once
#include<string>
using namespace std;

class StudentNode {
private:
	int ID;
	string firstName, lastName;
	double finalGrade;
	StudentNode* nextS;
	int static numStudents;

public:
	StudentNode();
	StudentNode(int _ID, string _firstName, string _lastName, double _finalGrade);
	int getID() { return ID; }
	string getfirstName() { return firstName; }
	string getlastName() { return lastName; }
	double getfinalGrade() { return finalGrade; }
	StudentNode* getNext() { return nextS; }
	void setNext(StudentNode* next) { nextS = next; }
	void setfirstName(string ifirstname) { firstName = ifirstname; }
	void setfinalGrade(double ifinalGrade) { finalGrade = ifinalGrade; }
	void print();





};
