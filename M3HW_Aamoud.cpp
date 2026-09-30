//Hamza Aamoud
//CSC 134
//M3HW
//9-30-2026
//Gold

#include <iomanip>
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

void q1 ();
void q2 ();
void q3 ();
void q4 ();

int main (){
    string questionChoice;
    string repeat = "y"; 
    while (repeat == "y") {   
        cout << "What question would you like to see?" << endl << "1" << endl << "2" << endl << "3" << endl << "4" << endl;
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
    string userResponse;
    cout << "Hello, I'm a C++ program!" << endl << "Do you like me? Please type yes or no. (case sensitive)" << endl;
    cin >> userResponse;
    if (userResponse == "yes"){
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (userResponse == "no"){
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else {
        cout << "If you're not sure… that's OK." << endl;
    }
}

void q2 (){
    string item = "Panini";
    const double ITEM_PRICE = 5.99;
    double tax_percent = .08;
    double tax_amount;
    double total;
    double tip = 0;
    int inOrOut;
    //Greet customer, state order
    cout << "Hello, welcome to out CSC 134 restuarant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    while (inOrOut != 1 and inOrOut != 2){
        cout << "Would you like to dine-in or takeout? Enter the corresponding number" << endl << "1 ) Dine In" << endl << "2 ) Takeout" << endl;
        cin >> inOrOut;
        if (inOrOut != 1 and inOrOut !=2){
            cout << "That was not one of the options" << endl;
        }
    }
    //Calculate tax and total
    if (inOrOut == 1){
        tip = ITEM_PRICE * .15;
    }
    tax_amount = ITEM_PRICE * tax_percent;
    total = ITEM_PRICE + tax_amount + tip;
    
    //Print out receipt details
    //Setting decimal amount to 2
    cout << setprecision(2) << fixed;
    cout << "Thank you for dining with us!" << endl;
    cout << "-----------------------------" << endl; 
    cout << "";
    cout << "Price : $" << ITEM_PRICE << endl;
    cout << "Tax   : $" << tax_amount << endl;
    cout << "Tip   : $" << tip << endl;
    cout << "-----------------------------" << endl; 
    cout << "Total : $" << total << endl;
}

void q3 (){
    string userChoice;
    cout << "Welome to Dungeon Delish" << endl << "Which path would you like to explore? Enter the corresponding number" << endl << "1) Left" << endl << "2) Right" << endl;
    cin >> userChoice;

    if (userChoice == "1"){
        cout << "You took the left path. While walking down the hall you stepped on a pressure plate and got riddled by asparagus darts" << endl;
    }
    else if (userChoice == "2") {
        cout << "You took the right path. After walking for a while you happen upon another split in the tunnel" << endl;
        cout << "Which path would you like to explore? Enter the corresponding number" << endl << "1) Left" << endl << "2) Right" << endl;
        cin >> userChoice;
        if (userChoice == "1"){ 
            cout << "You walk down the left hall. Some begins to smell sweet. After walking a little more you emerge in a world of pancake hills, icecream scoop mountains, and rootbeer rivers. After filling your stomach you return home happy" << endl;
        }
        else if (userChoice == "2"){
            cout << "You walk along the right path, when suddenly a spoiled milk river sweeps you away and you are consumed by anchovies." << endl;
        }
        else {
        cout << "You waited to long and a broccoli bear found you. You were viciously mauled" << endl;
        }
    }
    else {
        cout << "You didn't choose a real path, walked into a wall, and knocked yourself out" << endl;
    }


}

void q4 (){
    int num1, num2, sum, userSum;
    srand(time(nullptr));
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    sum = num1 + num2;
    cout << num1 << " + " << num2 << " = ?" << endl;
    cin >> userSum;
    if (userSum == sum){
        cout << "That is correct" << endl;
    }
    else {
        cout << "That is incorrect. The correct answer is : " << sum << endl;
    }
}