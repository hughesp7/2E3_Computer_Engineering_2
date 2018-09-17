//Student.h
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int studentID;
	string firstname, surname;
	double labs[3]; 
	double exam; 
	double finalGrade; 
	static int numStudents;
							
public:
	Student(); 
			   
			   
	void readMarks(); 
	void printFinalGrade();
	string getLastname() { return surname; }
	int getStudentID() { return studentID; }
};
