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

    if (userLine.find("BFF") >= 1) {

    }


    cout << "Expanded: " << userLine << endl;


    return 0;
}