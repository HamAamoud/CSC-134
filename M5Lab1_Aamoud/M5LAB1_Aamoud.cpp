#include <iostream>
#include <limits>
using namespace std;
/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Hamza Aamoud
10/26/2026
*/
// FUNCTION PROTOTYPES
// Every function you write must be listed here, above main().
// The compiler reads the file from top to bottom. A prototype
// tells it: "this function exists, and its full code is below."
void main_menu();
void choice_cave_mouth();
void choice_side_enterance();
void choice_go_home();
void choice_delve_deeper();
void choice_explore_tunnel ();
// TODO: add your new prototypes here
int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    // Start the story.
    main_menu();
    // When main_menu() returns, the story is over.
    cout << "Thanks for playing!" << endl;
    return 0; // finished with no errors
}
// FUNCTION DEFINITIONS
// The full code for each function goes here, below main().
void main_menu() {
    // A menu that accepts 1, 2, 3, or 4 (quit).
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky cave." << endl;
    cout << "Do you:" << endl;
    cout << "1. Enter the cave mouth" << endl;
    cout << "2. Look for a side enterance" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice = 0;
    cin >> choice;
    if (cin.fail()) {
        // The player typed something that is not a number.
        cin.clear(); // reset cin so it can read again
        choice = 0; // treat it as an invalid choice
    }
    // Throw away the rest of the line the player typed.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (1 == choice) {
        choice_cave_mouth();
    } else if (2 == choice) {
        choice_side_enterance();
    } else if (3 == choice) {
        choice_go_home();
    } else if (4 == choice) {
        cout << "Ok, quitting game" << endl;
        return; // go back to main()
    } else {
        cout << "That's not a valid choice, please try again." << endl;
        main_menu(); // try again
    }
}

void choice_cave_mouth() {
    cout << "You enter the cave mouth." << endl;
    cout << "From deep within you smell something delicious." << endl;
    cout << "Do you:" << endl;
    cout << "1. Delve deeper in search of tasty treats" << endl;
    cout << "2. Give up and go home" << endl;
    int choice = 0;
        cout << "Choose: ";
        cin >> choice;
    if (1 == choice) {
        choice_delve_deeper();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_delve_deeper() {
    cout << "Enticed by the sweet scent of treats, you explore deeper in the cave" << endl;
    cout << "After walking for a short while, YOU ARE AMBUSHED" << endl;
    cout << "The scent was just a trap set by an evil broccolli bear." << endl;
    cout << "Your bones will serve as nourishment for their seedlings" << endl;
}

void choice_side_enterance() {
    cout << "You find a side enterance" << endl;
    cout << "You hear water dripping and notice the scent of dirt down the tunnel" << endl;
    cout << "Do you:" << endl;
    cout << "1. Explore the side tunnel" << endl;
    cout << "2. Give up and go home" << endl;
    int choice = 0;
        cout << "Choose: ";
        cin >> choice;
    if (1 == choice) {
        choice_explore_tunnel();
    } else if (2 == choice) {
        choice_go_home();
    }
}

void choice_explore_tunnel () {
    cout << "After looking around a bit, you step on a hidden pressure plate by accident" << endl;
    cout << "On your left, a secret door opens up to a beautifull garden full of teriyaki trees and filet mignon flowers" << endl;
    cout << "With this boon you never have to eat horid dinners again!!!" << endl;
}

void choice_go_home() {
    cout << "After going home, you find that your mom has made dinner." << endl;
    cout << "Per usual, you get a plain baloney sandwich." << endl;
    cout << "After your sad meal, you weep until you sleep." << endl;
}