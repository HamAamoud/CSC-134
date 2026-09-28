//Hamza Aamoud
// M3T2
// Basic Craps


#include <iostream>

//Lets us make random numbers
#include <cmath>    

//Seeding rand functions to make it truly random
#include <ctime>
using namespace std;

int main() {
    
    //Greeting player and setting seed
    cout << "Lets Play Craps!" << endl;
    int seed = time (0);
    cout << "Whats your lucky number? : ";
    cin >> seed;
    srand(seed);

    //Setting max roll per die and initializing dice
    const int MAX = 6;
    int roll1, roll2, total, point;

    //Rolling , If rand outputs 6, roll = 1
    roll1 = (rand() % MAX) + 1;
    roll2 = (rand() % MAX) + 1;
    total = roll1 + roll2;

    cout << "You rolled a " << roll1 << " and a " << roll2 <<endl;
    cout << "Your total is : " << total << endl;

    if (total == 7) {
        cout << "LUCKY 7 YOU WIN!!!";
    }
    else if (total == 11){
        cout << "Eleven is a win!!!";
    }
    else if (total == 2) {
        cout << "Snake eyes, you lose :(";
    }
    else if (total == 12) {
        cout << "Boxcars, you lose :(";
    }
    else if (total == 3) {
        cout << "Unlucky 3, you lose :(";
    }

    point = total;
    cout << "Your point is : " << point << endl;
    
    return 0;
}
