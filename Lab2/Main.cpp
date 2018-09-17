#include<iostream>
#include "Student.h"
#include"Module.h"

using namespace std;

int main() {
	Module zero;
	string testname;
	int testID;


	cout << "What surname would you like to find an ID for?" << endl;
	cin >> testname;
	testID = zero.findByName(testname);
	cout << "The corresponding ID to this name is " << testID << endl;

	cout << "What ID would you like to find a name for?" << endl;
	cin >> testID;
	testname = zero.findByID(testID);
	cout << "The corresponding surname to this name is " << testname << endl;





	return 0;
}