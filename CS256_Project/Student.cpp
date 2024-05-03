#include "Student.h"

Student::Student(std::string studentName) {
	this->studentName = studentName;
	groupStatus = false;
	groupID = -1;
}
void Student::setStudentName(std::string studentName) {
	this->studentName = studentName;
}

std::string Student::getStudentName() { 
	return studentName; 
}

void Student::setGroupStatus(bool groupStatus) { 
	this->groupStatus = groupStatus;
}

bool Student::getGroupStatus() { 
	return groupStatus;
}

void Student::setGroupID(int groupID) { 
	this->groupID = groupID;
}

int  Student::getGroupID() { 
	return groupID; 
}

std::string Student::toString() { //????
	return 0;
}
