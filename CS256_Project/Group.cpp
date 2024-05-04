#include "Group.h"

Group::Group(int groupID) {
	this->groupID = groupID;
}

Group::~Group() = default;

int Group::getGroupID() const { return groupID; }

void Group::setGroupID(int groupID) { this->groupID = groupID; }

//void Group::deleteStudent(Student* student){}

int Group::getNumberOfStudent() const { return studentList.size(); }

void Group::addNewStudent(Student* student) {
	if (student->getGroupStatus() == true) {
		std::cout << "This student already been in other group";
		return;
	}
	else {
		student->setGroupID(groupID);
		student->setGroupStatus(true);
		studentList.push_back(student);
	}

}

//void Group::saveGroupInfor(){}
//
//void Group::loadGroupInfor(){}
//
//void Group::displayGroupInfor(){}

//1
//Nguyen van A
//Nguyen nguyen B