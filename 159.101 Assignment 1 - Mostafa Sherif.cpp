// Student ID: 15255870, Student Name: Mostafa Sherif Mostafa

#include <iostream>
using namespace std;

int main ()
{
    int diff, day, month, year;
    int MaxDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    cout << "Enter the difference in days: ";
    cin >> diff;
    cout << "Enter a date in the form day month year: ";
    cin >> day >> month >> year;
    
    if ((year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
        MaxDays[1] = 29;
    }
    
    day = day + diff;
    
    if (day > MaxDays[month-1]) {
        day = day - MaxDays[month-1];
        if (month == 12) {
            month = 1;
            year = year + 1;
        } else {
            month = month + 1;
        }
    } else if ( day <= 0) {
        if (month == 1) {
            month = 12;
            year = year - 1;
        } else {
            month = month - 1;
        }
        day = day + MaxDays[month-1];
    }
    
    
    cout << "The final date is: " << day << "/" << month << "/" << year << endl;

  return 0;
}
