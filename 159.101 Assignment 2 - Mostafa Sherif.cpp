// Student ID: 15255870, Student Name: Mostafa Sherif Mostafa

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int judges;
    
    cout<<"Enter number of judges: ";
    cin >> judges;
    
    while (judges < 4 || judges > 8) {
        cout<<"Invalid. Enter number of judges again (4 to 8): ";
        cin >> judges;
    }
    
    float marks, total, maxi, mini, finalMark;
    int indx;
    
    total = 0;
    indx = 0;
    maxi = 0;
    mini = 10;

    while (indx < judges){
        cout<<"Enter mark: ";
        cin >> marks;
        
        while (marks < 0.0 || marks > 10.0) {
            cout<<"Invalid. Enter mark again (0.0 to 10.0): ";
            cin >> marks;
        }
        
        if (marks > maxi) {
            maxi = marks;
        }
        if (marks < mini) {
            mini = marks;
        }

        total = total + marks;
        indx++;
    }

    
    finalMark = (total - (maxi+mini))/( judges - 2);

    int finalMarkint;

    finalMarkint = finalMark;

    if (finalMarkint == finalMark) {
        cout << "Final Mark: " << setprecision(1) << fixed << finalMark << endl;
    } else {
        cout << "Final Mark: " << setprecision(2) << fixed << finalMark << endl;
    }
    
    return 0;
}
