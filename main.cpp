// C++ Program to demonstrate how to Read a File into String
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    // get the filepath
    string filePath = "Microsoft-Windows-Sysmon%4Operational.evtx";

    // Open the file using ifstream
    ifstream file(filePath);

    // confirm file opening
    if (!file.is_open()) {
        // print error message and return
        cerr << "Failed to open file: " << filePath << endl;

        return 1;
    }

    // Read the file line by line into a string
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}
