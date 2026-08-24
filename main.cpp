/*
M1T1_Aamoud
8/24/26
First C++ Program - Smoke Test
*/

//Starts Program
#include <iostream>
using namespace std;

//Main : Function (aka a Verb)
int main()
{
    cout << "Hello CSC 134!" << endl;
    //Creating a variable
    string name;
    cout << "What's your name? ";
    cin >> name; //Reads the next input and assigns it to the listed variable

    cout << "This program is for : " << name << endl;
    return 0;
}
