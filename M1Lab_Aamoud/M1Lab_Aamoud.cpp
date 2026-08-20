/*
CSC 134
M1Lab
Hamza Aamoud
8/20/16
*/
#include <iostream>

using namespace std;

int main(){
//This program will simulate an apple orchard
//The owner's name
string name = "Hamza";
//Number of apple owned
int apple = 100;
//price for apple
double pricePerApple = 0.25;

//Total apple price
double appleTotal = apple * pricePerApple;

//Output orchard info
cout << "Welcome to Hamza's Apple Orchard" << endl;
cout << "We have " << apple << " apples in stock" << endl;
cout << "Apples are currently $" << pricePerApple << " each." << endl;
cout << "If you want them all, that will be $" << appleTotal << endl;

}
