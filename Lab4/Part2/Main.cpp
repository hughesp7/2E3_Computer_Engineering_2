#include<iostream>
#include<string>
#include<fstream>
#include "StudentLinkedList.h"
#include "StudentNode.h"

using namespace std;

int main() {
	StudentLinkedList l1;
	StudentNode* test;
	string surname, firstname;
	int studentNumber, studentGrade;
	fstream dataFile;
	


	dataFile.open("student10000.txt", ios::in);
	for(int i = 0; i < 10000; i++)
	{
		dataFile >> surname >> firstname >> studentNumber >> studentGrade;
		l1.addStudent(surname, firstname, studentNumber, studentGrade);

	}
	dataFile.close();
	l1.printTree();
	l1.findS("Jasper", "SCOTT");
	l1.findS("Abraham", "CRONIN");
	l1.findS("Collin", "BREE");
	l1.findS("Etienne", "HOLOHAN");
	l1.findS("", "AAAA");
	l1.findS("", "ZZZZ");
	

	




	return 0;
}