
#include "Course.h"

static int group_id_auto_increasement = 1;
Course::Course(std::string courseID) {
	this->courseID = courseID;
}

int Course::getNumberOfProjects() const {
	return projectList.size();
}

int Course::getNumberOfGroups() const {
	return groupList.size();
}


Student* Course::addNewStudent(std::string studentName) {
	Student* newStudent = new Student(studentName);
	studentList.push_back(newStudent);
	return newStudent;
}

Group* Course::addNewGroup(int groupID) {
	Group* newGroup = new Group(groupID);
	groupList.push_back(newGroup);

	return newGroup;
}

void Course::addStudentToAGroup(Student* student, int groupID) {
	Group* group = findGroupByID(groupID);
	group->addNewStudent(student);
}
void Course::deleteStudentFromAGroup() {
}
void Course::addNewProject(int projectID, Time dueDate) {
	Project* newProject = new Project(projectID, dueDate);
	projectList.push_back(newProject);

}
void Course::submit(int groupID, int projectID, Time submitDate) {
	Project* project = findProjectbyID(projectID);
	Time dueDate;
	dueDate = project->getDueDate();
	bool status = dueDate.dateComparision(submitDate);
	Submission* submission_result = new Submission(groupID, projectID, submitDate, status);
	submissionList.push_back(submission_result);
}

Group* Course::findGroupByID(int ID) {
	for (Group* group : groupList) {
		if (group->getGroupID() == ID) {
			return group;
		}
	}
	return nullptr;
}

Project* Course::findProjectbyID(int ID) {
	for (Project* project : projectList) {
		if (project->getProjectID() == ID) {
			return project;
		}
	}
	return nullptr;
}

Submission* Course::findSubmission(int projectID, int groupID) {
	for (Submission* submission : submissionList) {
		if (submission->getGroupID() == groupID && submission->getProjectID() == projectID) {
			return submission;
		}
	}
	return nullptr;
}

Submission* Course::findSubmissionByProjectID(int projectID) {
	for (Submission* submission : submissionList) {
		if (submission->getProjectID() == projectID) {
			return submission;
		}
	}
	return nullptr;
}

Submission* Course::findSubmissionByGroupID(int groupID) {
	for (Submission* submission : submissionList) {
		if (submission->getGroupID() == groupID) {
			return submission;
		}
	}
	return nullptr;
}

Submission** Course::findSubmissionByStatus(int projectID, bool status) {
	Submission** submissionByStatus = new Submission * [groupList.size()];
	int i = 0;
	for (Submission* submission : submissionList) {
		if (submission->getProjectID() == projectID && submission->getStatus() == status) {
			submissionByStatus[i] = submission;
			i++;
		}
	}
	return submissionByStatus;
}

Submission** Course::findSubmissionToDate(int projectID, Time date) {
	Submission** submissionToDueDate = new Submission * [groupList.size()];
	int i = 0;
	for (Submission* submission : submissionList) {
		if (submission->getProjectID() == projectID && submission->getSubmitDate().dateComparision(date) == true) {
			submissionToDueDate[i] = submission;
			i++;
		}
	}
	return submissionToDueDate;
}