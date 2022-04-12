// basicTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main() {
    int i, j;
    int space = 10;
    int MAX = space + 1;

    for (i = 0; i < MAX; i++) {

        for (j = 0; j < space; j++) {
            cout << " ";
        }
        for (j = 0; j <= i; j++) {
            cout << "* ";
        }

        cout << "\n";
        space--;
    }

    space = 0;

    for (i = MAX; i > 0; i--) {

        for (j = 0; j < space; j++) {
            cout << " ";
        }
        for (j = 0; j < i; j++) {
            cout << "* ";
        }

        cout << "\n";
        space++;
    }
}
