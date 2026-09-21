/*
CSC 134
M2Lab1
Hamza Aamoud
9/21/16
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string product = "peaches";
    double cost_each = 0.99;
    double total_cost;
    string last_name,full_name,first_name;
    int amount_purchased;

    //Greeting the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What is your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    //Taking user input on how many they want
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    //Makes doubles print out to the second variable
    cout << setprecision(2) << fixed;
    
    //Calculating total cost
    total_cost = amount_purchased * cost_each;

    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
