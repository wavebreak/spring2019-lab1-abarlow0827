//
// Created by William Smith on 2019-02-07.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userLine;

    cout << "Enter text:" << endl;
    getline(cin, userLine);
    cout << "You entered: " << userLine << endl;

    //this is a test

    cout << "Expanded: " << userLine << endl;


    return 0;
}