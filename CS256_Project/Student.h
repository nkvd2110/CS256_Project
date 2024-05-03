#include<string>
#pragma once
class Student
{
private:
	//The Unique or signature identifier of a student
	std::string studentName;
	//represent that a student has joined a group or not
	bool groupStatus;
	//ID of the student's group, or -1 if not in a group
	int groupID;
public:
	/**
	 * @brief Constructor for the Student class.
	 *
	 * @param studentName The name of the student.
	 */
	Student(std::string studentName);

	/**
	 * @brief Getter method for name.
	 *
	 * @return The student's name.
	 */
	std::string getStudentName();

	/**
	 * @brief Setter method for name.
	 *
	 * @param studentName The new name of the student.
	 */
	void setStudentName(std::string studentName);

	/**
	 * @brief Getter method for groupStatus, whether the student belongs to a group (true) or not (false).
	 *
	 * @return True if the student is in a group, false otherwise.
	 */
	bool getGroupStatus();

	/**
	 * @brief Setter method for groupStatus, whether the student belongs to a group (true) or not (false).
	 *
	 * @param groupStatus The group membership status.
	 */
	void setGroupStatus(bool groupStatus);

	/**
	 * Sets the ID of the group the student belongs to (if applicable).
	 *
	 * @param groupID The ID of the student's group.
	 */
	void setGroupID(int groupID);

	/**
	 * @brief Gets the ID of the group the student belongs to (if applicable).
	 *
	 * @return The ID of the student's group, or -1 if not in a group.
	 */
	int getGroupID();

	/**
	 * @brief Creates a string representation of the student object.
	 *
	 * @return A string containing the student's name and group information.
	 */
	std::string toString();

};

