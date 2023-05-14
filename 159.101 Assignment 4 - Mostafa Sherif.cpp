// Student ID: 15255870, Student Name: Mostafa Sherif Mostafa

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string output;
string text;
string words[40];
int text2words(int total);

int main() {
    
    int total, i, j;
    
    cout << "Enter a line of text: ";
    getline(cin, text);
    total = text.length();
    while ( total > 40){
        cout << "The line is  greater than 40 characters" << endl;
        cout << "Enter a line of text: ";
        getline(cin, text);
        total = text.length();
    }

    j = text2words(total);


    for (i = 0; i <= j; i++){
        cout << words[i] << endl;
        }
    
    //cout << "1234567890123456789012345678901234567890" << endl;

    return 0;
}

int text2words(int total) {
    int i, j=0;
    string word = "";
    for (i = 0; i < total; i++) {
        if (text[i] == ' ') {
            words[j] = word;
            j++;
            word = "";
            } else {
                word = word + text[i];
            }
        }
    words[j] = word;
    return j;

}
