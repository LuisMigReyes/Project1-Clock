//Luis Reyes
// CS-210
//9-16-23
//Project 1

using namespace std;
#include "Clock.h"
#include <iostream>
#include <iomanip>
#include <string>
int hours = 11;
int minutes = 59;
int seconds = 29;





void setTime(int hours, int minutes, int seconds)
{
	
	

	

}

//functions to add hours, minutes, seconds
void addSecond()
{
	seconds = (seconds + 1) % 60;
	if (seconds == 0) {
		addMinute();
	}
}
void addHour()
{
	hours = (hours + 1) % 24;
}
void addMinute()
{
	minutes = (minutes + 1) % 60;
	if (minutes == 0) {
		addHour();
	}
}

//method for 12 hour clock for output
std::string get12HourFormat()
{
	std::string formatHours;
	std::string getSuffix();
	int reformattedHours;

	reformattedHours = hours;
	if (hours >= 12) {
		if (hours > 12) {
			reformattedHours -= 12;
		}
	}
	else {
		
		if (hours == 0) {
			reformattedHours += 12;
		}
	}
	formatHours = pad(reformattedHours) + ":" + pad(minutes) + ":" + pad(seconds) + " " +  getSuffix();
	return formatHours;
}

//method for 24 hour clock for output
std::string get24HourFormat()
{
	std::string formatHours = pad(hours) + ":" + pad(minutes) + ":" + pad(seconds);
	return formatHours;
}

// method for adding a 0 in front of single digits for minutes and seconds
std::string pad(int value)
{
	
	std::string num2Pad = std::to_string(value);
	if (num2Pad.length() == 1) {
		num2Pad = "0" + num2Pad;
	}
	return num2Pad;
}

//method to check if hours is am or pm
std::string getSuffix() {
	
	if (hours >= 0 && hours <= 11) {
		return "AM";
	}
	else {
		return "PM";
	}
}

