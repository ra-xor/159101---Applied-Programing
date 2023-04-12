#include <iomanip>
#include <iostream>
#include <cmath>

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
    cout << "The average is " << avg << " volts." << endl;
    cout << "10% = " << tenpercent << " volts." << endl;
    cout << "15% = " << fiveteencent << " volts." << endl << endl;
    
    float deltaAvg[6], deltaCons[5];
    int p=0;

    for (i=0;i<6;i++){
        deltaAvg[i]= abs(voltages[i]-avg);
        if (deltaAvg[i]>tenpercent){
            p=1;
        }
        }
    for (i=0;i<5;i++){
        deltaCons[i]= abs(voltages[i]-voltages[i+1]);
        if (deltaCons[i]>fiveteencent){
            p=1;
        }
        }
    
    if (p==0){
        cout << "No problems were encountered." << endl;
    } else {
        cout << "The following problems occurred:" << endl;
        for (i=0;i<6;i++){
            if (deltaAvg[i]>tenpercent){
                cout << p <<". Voltage at hour " << i+1 << " was " << voltages[i] << " volts (difference of " << deltaAvg[i] << " volts)." << endl;
                p++;
            }
        }
        for (i=0;i<5;i++){
            if (deltaCons[i]>fiveteencent){
                cout << p <<". Voltage change from hour " << i+1 << " to hour " << i+2 << " was " << deltaCons[i] << " volts." << endl;
                p++;
            }
        }
    }
    
    
    //
    
    //

    return 0;
}