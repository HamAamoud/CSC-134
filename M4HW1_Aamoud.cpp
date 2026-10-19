//Hamza Aamoud
//M4H1
//CSC 134
//Times Tables
//Gold

#include <iostream>

using namespace std;

int main () {

    int numIn, product;
    int numValid = 0;
    int repNum = 1;
    while (numValid == 0){
        cout << "Enter a number between 1 and 12: ";
        cin >> numIn;
        if (numIn <= 12 and numIn > 0){
        numValid = 1;
        }
    }
    
    while (repNum <= 12) {
        product = numIn * repNum;
        cout << numIn << " times " << repNum << " = " << product << endl;
        repNum++;
    }
}