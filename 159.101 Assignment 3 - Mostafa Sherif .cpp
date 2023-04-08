/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i=0;
    float voltages[6], total = 0, avg, tenpercent, fiveteencent;
    
    cout<<"Enter 6 voltages: ";
    while (i < 6) {
        cin >> voltages[i];
        total = total + voltages[i];
        i++;
    }
    
    avg = total/6;
    tenpercent = avg * 0.10;
    fiveteencent = avg * 0.15;
    
    cout << fixed << setprecision(1);
    cout<< total << endl;
    cout << "The average is " << avg << " volts." << endl;
    cout << "10% = " << tenpercent << " volts." << endl;
    cout << "15% = " << fiveteencent << " volts." << endl; 
    
    float deltaAvg[6], deltaCons[6];
    i = 0;
    while(i<0){
        
    }
    
    
    
    
    
    
    
    return 0;
}

