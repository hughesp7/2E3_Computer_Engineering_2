#pragma once
#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

class Module {
private:
	Student students[5];

public:
	void readAllMarks();
	void printAllGrades();
	int findByName(string name);
	string findByID(int ID);






};