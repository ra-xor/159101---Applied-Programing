#include <iostream>
using namespace std;

int readvalues();
void countvalues(int n); // error
int data[100], howmany[100]; // error

int main() {
  int num, i; // error in line 20: 
  // Section 1: read numbers with trailing value of -1
  num = readvalues();

  // Section 2: count how many times each number appears
  countvalues(num);

  // Section 3: display the results
  cout << "Here are the values and how ";
  cout << "many times each value appears:\n";
  cout << "        Values:";
  for (i = 0; i < num; i++) {
    cout.width(4);
    cout << right << data[i];
  }
  cout << "\nHow many times:";
  for (i = 0; i < num; i++) { // error
    cout.width(4);
    cout << right << howmany[i];
  }
  cout << endl;
}

int readvalues() { // error
  int i, temp;
  cout << "Enter a positive value (-1 to stop): ";
  cin >> temp;
  i = 0;
  while (temp > 0) { //error
    data[i] = temp;
    i++; // error ( Note: i is larger than data by 1)
    cout << "Enter a positive value (-1 to stop): ";
    cin >> temp;
  }
  return i;
}

void countvalues(int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    howmany[i] = 0; // error ( initialize totals)
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (data[i] == data[j]) { //error
        howmany[i]++; //error
      }
    }
  }
}
