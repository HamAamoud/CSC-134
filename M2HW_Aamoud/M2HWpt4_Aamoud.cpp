//Hamza Aamoud
//M2HW pt 4

#include <iostream>
using namespace std;

int main()
{
    cout << "Question 4" << endl;
    //Setting string variables
    string letsGo, school, team, cheerOne, cheerTwo;
    letsGo = "Let's go ";
    school = "FTCC";
    team = "Trojans";
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    //Printing cheers
    for (int i = 0; i< 3; i++) {
        cout << cheerOne << endl;
    }
    cout << cheerTwo << endl;

}