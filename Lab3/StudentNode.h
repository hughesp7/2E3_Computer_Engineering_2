#pragma once
#include<string>
using namespace std;

class StudentNode {
private:
	int ID;
	string firstName;
	double finalGrade;
	StudentNode* nextS;
	int static numStudents;

public:
	StudentNode();
	StudentNode(int _ID, string _firstName, double _finalGrade);
	int getID() { return ID; }
	string getfirstName() { return firstName; }
	double getfinalGrade() { return finalGrade; }
	StudentNode* getNext() { return nextS; }
	void setNext(StudentNode* next) { nextS = next; }
	void setfirstName(string ifirstname) { firstName = ifirstname; }
	void setfinalGrade(double ifinalGrade) { finalGrade = ifinalGrade; }
	void print();





};
