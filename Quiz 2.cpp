#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int i=0, j=0, region;
    float Auckland[100], Wellington[100], totalA = 0, totalW = 0, price;
   
    cout<<"Enter code and petrol price for each region." << endl;
    cout<<"Wellington code is 4, Auckland code is 9, enter -1 to stop." << endl;

    cin >> region;
    while ( region > 0) {
        cin >> price;
        if (region == 9){
            Auckland[i] = price;
            totalA = totalA + price;
            i++;
        } else if (region == 4){
            Wellington[j] = price;
            totalW = totalW + price;
            j++;
        } else {
            cout<<"The region code doesn't exit." << endl;
        }
        cin >> region;
    }

    cout << fixed << setprecision(2);

    if (i == 0){
        cout << "No prices entered for Auckland." << endl;
    } else {
        cout << "Auckland average petrol price is $" << totalA/i << endl;
    }

    if (j == 0){
        cout << "No prices entered for Wellington." << endl;
    } else {
        cout << "Wellington average petrol price is $" << totalW/j << endl;
    }

    return 0;

}