//Hamza Aamoud
//CSC 134
//M6T1
//11-9-2026
//Loops and arrays

#include <iostream>
using namespace std;

void method1 ();
void method2();
int main () {
    method1 ();
    method2 ();
    return 0;
}

void method1 (){
    string item = "Warframes";
    cout << "Count how many " << item << " were seen each day." << endl;
    const int SIZE = 5;
    int total = 0, count;
    for (int i = 0; i < SIZE ; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> count;
        total += count;
    }
    cout << "Total " << item << " seen: " << total << endl;
    double average = total / SIZE;
    cout << "Average per day : " << average << endl;
}

void method2 (){
        string item = "Warframe";
    cout << "Count how many " << item << " were seen each day." << endl;
    const int SIZE = 5;
    int counts [SIZE];
    int total = 0;
    for (int i = 0; i < SIZE ; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> counts [i];
        total += counts[i];
    }
    cout << "Total " << item << " seen: " << total << endl;
    double average = total / SIZE;
    cout << "Average per day : " << average << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "Day " << i + 1 << ": " << counts[i] << endl;
    }
}