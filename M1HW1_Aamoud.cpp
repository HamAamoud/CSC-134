//CSC 134
/*
M1HW1
Hamza Aamoud
8/24/2026
Movie Description
*/

#include <iostream>
using namespace std;

int main()
{
    string title = "Labyrinth";
    int releaseDate = 1986;
    double grossSaleUS = 12.9;
    int cost = 25;
    int worldGross = 35;
    
    cout << title << " came out in " << releaseDate << " and grossed $"<< grossSaleUS << " million in the US." << endl << endl;

    cout << title << " cost $" << cost << " million to produce, making it a box office flop." << endl << endl ;
    
    cout << "While it may have flopped on release, it later exploded worldwide."<< endl << endl ;
    
    cout << "In the end, off of cinema sales alone (aka not couting the majority of profits in at home video), " << title << " made $" << worldGross << " million world wide" << endl << endl ;
    
    cout << "Some Iconic quotes include: " << endl << endl ;
    
    cout << "\"I ask for so little. Just fear me, love me, do as I say, and I will be your slave.\" - Jareth the Goblin king (David Bowie)" << endl << endl ;
    
    cout << "\"Give me the child! Through dangers untold, and hardships unnumbered, I have fought my way here to the castle beyond the \nGoblin City to take back what you have stolen.\" - Sarah (Jennifer Connelly)" << endl << endl ;
    
    cout << "My favorite scene dipicts two gatekeepers guarding two doors. One tells lies and the other tells truths. Sarah must figure \nout which is which to go through the right door." << endl;
    
    return 0;
}