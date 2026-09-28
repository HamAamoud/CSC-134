//Hamza Aamoud
//M2HW Part 1
//Gold

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Initializing variables
    double startBalance, withdrawal, deposit, endBalance;
    string name;
    int accountNumber;

    //Taking User info
    cout << "Hello, Welcome To Ham Bank United";
    cout << "Please enter you name: ";
    getline(cin, name);
    cout << "Enter initial balance and desired withdrawal and/or deposit" << endl;
    cout << "Initial: $";
    cin >> startBalance;
    cout << " - Withdrawal amount: $";
    cin >> withdrawal;
    cout << " - Deposit amount: $";
    cin >> deposit;

    //Setting outputs to two decimal places and forcing .00 to appear if none are present
    cout << setprecision(2) << fixed << showpoint;

    //Math
    endBalance = startBalance - withdrawal + deposit;
    accountNumber = startBalance * 600 - name.length() * 6;

    //Print out
    cout << "Account User    : " << name << endl;
    cout << "Account Number  : " << accountNumber << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Initial Balance : $" << startBalance << endl;
    cout << "Final Balance   : $" << endBalance << endl;
}