//Hamza Aamoud
//CSC 134
//M5HW
//11-4-2026
//Gold

#include <iomanip>
#include <iostream>
using namespace std;

void q1 ();
void q2 ();
void q3 ();
void q4 ();
void q5 ();

int main (){
    string questionChoice;
    string repeat = "y"; 
    while (repeat == "y") {   
        cout << "What question would you like to see?" << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl << "5" << endl << "0 TO EXIT" << endl;
        cin >> questionChoice;

        if (questionChoice == "1") {
            q1();
        }
        else if (questionChoice == "2") {
            q2();
        }
        else if (questionChoice == "3") {
            q3();
        }
        else if (questionChoice == "4") {
            q4();
        }
        else if (questionChoice == "5") {
            q5();
        }
        else if (questionChoice == "0") {
            return 0;
        }
        else {
            cout << "That was not one of the options :(" << endl;
        }

        cout << "Enter 'y' to return to menu : ";
        cin >> repeat;
        if (repeat != "y"){
            return 0;
        }
    }
}

void q1 (){
    double total = 0;
    double monthlyRain, average;
    string month1, month2, month3;
    cout << endl << "Rainfall Average-inator" << endl;
    
    cout << endl << "Enter month : ";
    cin >> month1;
    cout << "Enter Rainfall For " << month1 << ": ";
    cin >> monthlyRain;
    total = total + monthlyRain;

    cout << endl << "Enter month : ";
    cin >> month2;
    cout << "Enter Rainfall For " << month2 << ": ";
    cin >> monthlyRain;
    total = total + monthlyRain;

    cout << endl << "Enter month : ";
    cin >> month3;
    cout << "Enter Rainfall For " << month3 << ": ";
    cin >> monthlyRain;
    total = total + monthlyRain;
    
    average = total / 3;
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;
}

void q2 (){
    cout << "Box Calculate-inator" << endl;
    double width = 0, length = 0, height = 0, volume;
    while (width <= 0) {
        cout << "Enter width :";
        cin >> width;
        if (width <= 0){
            cout << "Entered number must work in standard 3d space!!! Try again" << endl;
        }
    }
    while (length <= 0) {
        cout << "length :";
        cin >> length;
        if (length <= 0){
            cout << "Entered number must work in standard 3d space!!! Try again" << endl;
        }
    }
    while (height <= 0) {
        cout << "Enter height :";
        cin >> height;
        if (height <= 0){
            cout << "Entered number must work in standard 3d space!!! Try again" << endl;
        }
    }
    volume = width * length * height;
    cout << "The volume of your box is : " << volume << endl;
}

void q3 (){
    int numChoice = 0;
    cout << "Roman Numeral-inator" << endl;
    while (numChoice > 10 or numChoice < 1) {
        cout << "Enter a number from 1 to 10 : ";
        cin >> numChoice;
        if (numChoice > 10 or numChoice < 1) {
            cout << "Your bad at following directions" << endl;
        }
    }
    if (numChoice == 1){
        cout << "The roman numeral for your number is : I" << endl;
    }
    else if (numChoice == 2){
        cout << "The roman numeral for your number is : II" << endl;
    }
    else if (numChoice == 3){
        cout << "The roman numeral for your number is : III" << endl;
    } 
    else if (numChoice == 4){
        cout << "The roman numeral for your number is : IV" << endl;
    } 
    else if (numChoice == 5){
        cout << "The roman numeral for your number is : V" << endl;
    } 
    else if (numChoice == 6){
        cout << "The roman numeral for your number is : VI" << endl;
    } 
    else if (numChoice == 7){
        cout << "The roman numeral for your number is : VII" << endl;
    } 
    else if (numChoice == 8){
        cout << "The roman numeral for your number is : VIII" << endl;
    } 
    else if (numChoice == 9){
        cout << "The roman numeral for your number is : IX" << endl;
    } 
    else if (numChoice == 10){
        cout << "The roman numeral for your number is : X" << endl;
    } 
}

void q4 (){
    
}

void q5 () {

}