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

int main() {
}

// This is a test line - signed again