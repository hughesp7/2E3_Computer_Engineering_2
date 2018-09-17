#include<iostream>
#include"Student.h"

using namespace std;

int Student::numStudents = 1;

Student::Student() {
	 studentID = numStudents;
	 cout << "Enter your firstname followed by a space and your surname" << endl;
	 cin >> firstname >> surname;
	 cout << "Student number: " << studentID<<endl;
	 exam = 0;
	 finalGrade = 0;
	 for (int i = 0; i < 3; i++)
	 {
		 labs[i] = 0;
	 }
	 numStudents++;
}

void Student::readMarks() {
	cout << "Student name: " << firstname <<" "<<surname<< endl;
	cout << "Student No: " << studentID << endl;

	cout << "Enter all three of your lab marks one by one" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> labs[i];
	}

	cout << "What mark did you receive out of 100 in the exam?" << endl;
	cin >> exam;

}

void Student::printFinalGrade() {
	int total = 0, labResult = 0;
	for (int i = 0; i < 3; i++)
	{
		total = total + labs[i];
	}
	labResult = (total / 5);

	finalGrade = (labResult*0.4) + (exam*0.6);

	cout << "Student number " << studentID <<", "<< firstname <<" "<< surname<< " achieved a grade of " << finalGrade << " out of 100." << endl;



}