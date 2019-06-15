// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 1;
	int seat = 50;
	int count = 0;
	int copassengers = 1;
	int baggage = 4;
	int noofpassengers = 2;
	string passengername = "Robert";
	string copassengersname = "Olivia";
	string airways = "Alaskan Airways";
	string flightno = "#123f";
	string startp_t = "Seattle 6.50am";
	string destp_t = "Huston 10.20am";
	string seatno1 = "58a";
	string seatno2 = "58b";
	cout << "1. Reserve a seat" << endl;
	cout << "2. Flight schedule" << endl;
	cout << "3. Display passenger info" << endl;
	cout << "4. Flight details" << endl;
	cout << "5. User ticket info" << endl;
	cout << "6. Exit the program" << endl;
	cout << "Enter your choice" << endl;
	cin >> n;

		switch (n)
		{
		case 1:
			cout << "Reserve a seat" << endl;
			cout << "Checking the availability of seats" << endl;
			cout << "Enter the number of seats needed" << endl;
			cin >> count;
			seat = seat - count;
			cout << "No of seats confirmed" << endl;
			cout << count << endl;
			cout << "No of seats hereafter" << endl;
			cout << seat<<endl;
			break;
		case 2:
			cout << "Flight schedule" << endl;
			cout << "Next flight to go" << endl;
			cout << "Name of the airways" << airways << endl;
			cout << "Flight no" << flightno << endl;
			cout << "Start place and time" << startp_t << endl;
			cout << "Destination place and time" << destp_t << endl;
			break;
		case 3:
			cout << "Display passenger info" << endl;
			cout << "Name of the passenger" << passengername << endl;
			cout << "No of passengers" << noofpassengers << endl;
			cout << "Flight no" << flightno << endl;
			cout << "Start place and time" << startp_t << endl;
			cout << "Destination place and time" << destp_t << endl;
			cout << "Co-passengers" << copassengers << endl;
			cout << "Luggage" << baggage << endl;
			break;
		case 4:
			cout << "Flight details" << endl;
			cout << "Name of the airline" << airways<<endl;
			cout << "Flight no" << flightno << endl;
			cout << "Start place and time" << startp_t << endl;
			cout << "Destination place and time" << destp_t << endl;
			break;
		case 5:
			cout << "User ticket info" << endl;
			cout << "Name of the passenger" << passengername << endl;
			cout << "Seat nos" << seatno1 << endl;
			cout << "Name of co-passengers" << copassengersname << endl;
			cout << "Seat nos" << seatno2 << endl;
			cout << "Name of the airline" << airways << endl;
			cout << "Flight no" << flightno << endl;
			cout << "Start place and time" << startp_t << endl;
			cout << "Destination place and time" << destp_t << endl;
			cout << "Baggage details" << baggage << endl;
			break;
		case 6:
			cout << "Exit the program" << endl;
			cout << "Exit" << endl;
			break;
		default:
			cout << "Choice not selected" << endl;
			break;
		}

	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
