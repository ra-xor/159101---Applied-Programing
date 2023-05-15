// Student ID: 15255870, Student Name: Mostafa Sherif Mostafa

#include <iostream>
#include <string>

using namespace std;

string text;
string words[40];
int text2words(int total);

int main() {
    
    int total, i, j, addspaces;
    string output="";
    
    cout << "Enter a line of text: ";
    getline(cin, text);
    total = text.length();
    while ( total > 40){
        cout << "The line is  greater than 40 characters" << endl;
        cout << "Enter a line of text: ";
        getline(cin, text);
        total = text.length();
    }
    
    j = text2words(total); //getting the number of words and separate them in an Array
    addspaces = 40 - (total - j); // Spaces to add = max length - input ( removing input spaces ) 
    
    while ( addspaces>0){ // add spaces
        for ( i=0;(i<j) && (addspaces>0);i++){
        words[i]= words[i]+" ";
        addspaces--;
        }
    }

    for (i = 0; i <= j; i++){
        output = output + words[i];
        }
    
    cout << endl << "1234567890123456789012345678901234567890" << endl;
    cout << output << endl;

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