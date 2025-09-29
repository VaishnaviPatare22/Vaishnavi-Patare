/*Write a program to create two separate files.
1. for storing name of country(file1.txt)
2. Other for storing its capital(file2.txt)
Read the data from both the file simultaneously and display content on the output screen.*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file1("file1.txt");  // For country names
    ofstream file2("file2.txt");  // For capitals

    if (!file1 || !file2) {
        cout << "Error creating files.\n";
        return 1;
    }

    int n;
    string country, capital;

    cout << "Enter the number of countries: ";
    cin >> n;
    cin.ignore();  // To clear the newline from input buffer

    for (int i = 0; i < n; ++i) {
        cout << "Enter name of country " << (i + 1) << ": ";
        getline(cin, country);
        cout << "Enter capital of " << country << ": ";
        getline(cin, capital);

        file1 << country << endl;
        file2 << capital << endl;
    }

    file1.close();
    file2.close();

    // Reading the data back and displaying
    ifstream readFile1("file1.txt");
    ifstream readFile2("file2.txt");

    if (!readFile1 || !readFile2) {
        cout << "Error opening files for reading.\n";
        return 1;
    }

    cout << "\nCountry and Capital List:\n";
    cout << "---------------------------\n";

    while (getline(readFile1, country) && getline(readFile2, capital)) {
        cout << "Country: " << country << " | Capital: " << capital << endl;
    }

    readFile1.close();
    readFile2.close();

    return 0;
}

