//Hamza Aamoud
//CSC 134
//M3Lab2
//9-30-2026

#include <iostream>
using namespace std;

char letterGrade(double numGrade);

int main () {
    //Taking users numberic grade and passing it to the letterGrade function
    double numGrade;
    cout << "Please enter your numberic grade : ";
    cin >> numGrade;
    char letter = letterGrade(numGrade);

    //Outputting letter grade
    cout << "You got a : " << letter << endl;

}

char letterGrade (double numGrade) {
    //Uses the given numeric grade and innequalities to find correct letter
    if (numGrade >= 90) {
        return 'A';
    }
    else if (numGrade >= 80) {
        return 'B';
    }
    else if (numGrade >= 70) {
        return 'C';
    }
    else if (numGrade >= 60) {
        return 'D';
    }
    else {
        return 'F';
    }
}