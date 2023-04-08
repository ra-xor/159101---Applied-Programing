#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int diff, day, month, year;
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string expected;

    ifstream inputFile("input.txt");

    while (inputFile >> diff >> day >> month >> year >> expected) {

        // Input the difference and the date
        /*cout << "Enter the difference in days: ";
        cin >> diff;
        cout << "Enter a date in the form day month year: ";
        cin >> day >> month >> year; */

        // Check if the given year is a leap year and update daysInMonth accordingly
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            daysInMonth[1] = 29;
        }

        // Calculate the final date
        day = day + diff;

        if (day > daysInMonth[month - 1]) {
            day = day - daysInMonth[month - 1];
            month = month + 1;
            if (month > 12) {
                month = 1;
                year = year + 1;
            }
        } else if (day <= 0) {
            month = month - 1;
            if (month < 1) {
                month = 12;
                year = year - 1;
            }
            /*if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                daysInMonth[1] = 29;
            } else {
                daysInMonth[1] = 28;
            }*/
            day = day + daysInMonth[month - 1];
        }

        // Display the final date
        //cout << "The final date is: " << day << '/' << month << '/' << year << std::endl;

        string output = to_string(day) + '/' + to_string(month) + '/' + to_string(year);
        if ( output == expected) {
            cout << "Test Pass" << endl;
        } else {
            cout << "Test Fail" << diff << output << " " << expected << endl;
        }


    }

    return 0;
}
