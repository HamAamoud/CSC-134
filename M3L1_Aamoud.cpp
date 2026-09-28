//Hamza Aamoud
//CSC 134
//M3L1_Aamoud
//9/28/2026

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void choosesRock();
void choosesPaper();
void choosesScissors();
int computerChoice ();

int main() {
    string repeat = "y";
    
    while (repeat != "") {
        int choice;
        cout << "Select a hand to Throw" << endl << "Rock (1)" << endl << "Paper (2)" << endl << "Scissors (3)" << endl;
        cin >> choice;
        cout << endl;
        if (choice > 3 || choice < 1) {
            cout << "That isn't a valid choice" << endl;
        }
        else if (choice == 1){
            choosesRock();
        }
        else if (choice == 2){
            choosesPaper();
        }
        else {
            choosesScissors();
        }

        cout << "Enter anything to play again" << endl;
        cin >> repeat;
    }
    return 0;
}

void choosesRock() {
    int computerHand;
    computerHand = computerChoice();
    if (computerHand == 0){
        cout << "You both threw rock. Its a tie" << endl;
    }
    else if (computerHand == 1){
        cout << "Your opponent threw paper. Your loss" << endl;
    }
    else if (computerHand == 2) {
        cout << "Your opponent threw scissors. YOU'RE A WINNER!!!" << endl;
    }
}

void choosesPaper() {
    int computerHand = computerChoice();
    if (computerHand == 0){
        cout << "Your opponent threw rock. YOU'RE A WINNER!!!" << endl;
    }
    else if (computerHand == 1){
        cout << "You both threw paper. Its a tie" << endl;
    }
    else if (computerHand == 2) {
        cout << "Your opponent threw scissors. Your loss" << endl;
    }
}

void choosesScissors() {
    int computerHand = computerChoice();
    if (computerHand == 0){
        cout << "Your opponent threw rock. Your loss" << endl;
    }
    else if (computerHand == 1){
        cout << "Your opponent threw paper. YOU'RE A WINNER!!!" << endl;
    }
    else if (computerHand == 2) {
        cout << "You both threw scissors. Its a tie" << endl;
    }
}

int computerChoice() {
    srand(time(nullptr));
    int computerHand = rand() % 3;
    return computerHand;
}