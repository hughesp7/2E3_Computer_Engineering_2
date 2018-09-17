#include<iostream>
#include<string>
#include<fstream>
#include "StudentLinkedList.h"
#include "StudentNode.h"

using namespace std;

int main() {
	StudentLinkedList l1;
	string surname, firstname;
	int studentNumber, studentGrade;
	fstream dataFile;
	


	dataFile.open("student10000.txt", ios::in);
	while (!dataFile.eof())
	{
		dataFile >> surname >> firstname >> studentNumber >> studentGrade;
		l1.addStudent(surname, firstname, studentNumber, studentGrade);

	}

	

	l1.findByName("Abraham", "CRONIN");
	l1.findByName("Collin", "BREE");
	l1.findByName("Etienne", "HOLOHAN");
	l1.findByName("", "AAAA");
	l1.findByName("", "ZZZZ");

	
	//7095 comparisons were made to find this name.
	//5489 comparisons were made to find this name.
	//8522 comparisons were made to find this name.
	//However 10000 comparisons were made before we reached this point
	//However 10000 comparisons were made before we reached this point

	return 0;
}