#pragma once

#include<chrono>

class Time
{
	///
private:
	int day;
	int month;
	int year;

public:
	Time();
	Time(int, int, int);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int);
	void setMonth(int);
	void setYear(int);

	void getCurrentTime();

	bool dateComparision(Time);
};
//
// Project *project = findProjectID(ID);
// dueDate = (project)->getDueDate();
// Time submittedTime(20,1,2024);
// bool status = submittedTime.comparision(dueDate)
// Submission submit(1,1, submittedDate, status);


