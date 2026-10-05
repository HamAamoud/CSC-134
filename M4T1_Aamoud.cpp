//Hamza Aamoud
//M4T1
//CSC 134
//Using while loops
//10-5-2026

#include <iostream>

using namespace std;

int main () {
    int num = 0;
    const int min = 1;
    const int max = 10;

    while (num < 5){
        cout << "Hello\n";
        num++;
    }
    cout << "That's it!\n";
    
    num = min;
    cout << "Number \tSquare \n";
    while (num <= max){
        cout << num << "\t" << (num * num) << endl;
        num++;
    }
    return 0;
}