#include<iostream>
#include<vector>
#include<string>

#include "Course.h"

static int auto_increase_group = 1;

using namespace std;
Time returnTime()
{
	//input5
	int date_, month_, year_;
	cout << "Type date (dd mm yyyy): ";
	cin >> date_ >> month_ >> year_;

	//loop(input validation)
	Time time(date_, month_, year_);
	return time;
}

//submitted = returnTime();
int main() {
	/*cout << "Hello World" << endl;
	

	Time submittime = returnTime();
	Time dueDate(28, 4, 2024);
	Time current;
	current.getCurrentTime();
	cout << current.getDay() << endl;
	cout << current.getMonth() << endl;
	cout << current.getYear() << endl;
	cout << submittime.dateComparision(current);*/

	Course newCourse("CS256");
	Group* group = newCourse.addNewGroup(auto_increase_group);
	cout << newCourse.getNumberOfGroups() << endl;
	
	Student* student1 = newCourse.addNewStudent("Nguyen Van A");

	newCourse.addStudentToAGroup(student1, group->getGroupID());

	cout << student1->getGroupStatus() << endl;
	cout << student1->getGroupID() << endl;

	group->setGroupID(8);
	if (newCourse.findGroupByID(8) == nullptr) {
		cout << "fail";
	}
	else {
		cout << "ok";
	}
	


}