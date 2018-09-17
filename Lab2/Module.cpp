#include<iostream>
#include "Module.h"
#include "Student.h"

using namespace std;

void Module::readAllMarks() {
	for (int i = 0; i < 5; i++)
	{
		students[i].readMarks();

	}

}

void Module::printAllGrades() {
	for (int i = 0; i < 5; i++)
	{
		students[i].printFinalGrade();
	}

}

int Module::findByName(string name) {
	for (int i = 0; i < 5; i++)
	{
		if (students[i].getLastname() == name)
		{
			return students[i].getStudentID();
		}
	}


}

string Module::findByID(int ID) {
	for (int i = 0; i < 5; i++)
	{
		if (students[i].getStudentID() == ID)
		{
			return students[i].getLastname();
		}
	}

}

