#include "Time.h"

Time::Time() {
	day = 0;
	month = 0;
	year = 0;
}

Time::Time(int day_, int month_, int year_) {
	day = day_;
	month = month_;
	year = year_;
}

int Time::getDay() {
	return day;
}

int Time::getMonth() {
	return month;
}

int Time::getYear() {
	return year;
}

void Time::getCurrentTime() {
	std::time_t currentTime;
	std::time(&currentTime);

	std::tm localTime;
	localtime_s(&localTime, &currentTime);

	this->year = localTime.tm_year + 1900;
	this->month = localTime.tm_mon + 1;
	this->day = localTime.tm_mday;
}


bool Time::date_comparision(Time dueDate_) {
	if (this->year > dueDate_.getYear()) {
		return false;
	}
	else if (this->year < dueDate_.getYear()) {
		return true;
	}
	else {
		if (this->month > dueDate_.getMonth()) {
			return false;
		}
		else if (this->month < dueDate_.getMonth()) {
			return true;
		}
		else {
			if (this->day > dueDate_.getDay()) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}

