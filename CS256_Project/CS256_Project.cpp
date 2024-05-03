#include<iostream>
#include<vector>
#include<string>

#include "Time.h"

using namespace std;

int main() {
	cout << "Hello World" << endl;
	Time submittime(12, 5, 2024);
	Time dueDate(28, 4, 2024);
	Time current;
	current.getCurrentTime();
	cout << current.getDay() << endl;
	cout << current.getMonth() << endl;
	cout << current.getYear() << endl;
	cout << submittime.date_comparision(current);
}