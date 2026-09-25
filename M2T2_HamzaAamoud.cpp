//Hamza Aamoud
//M2L2
//Receipt Printout

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string item = "Panini";
    double item_price = 5.99;
    double tax_percent = .08;
    double tax_amount;
    double total;

    //Greet customer, state order
    cout << "Hello, welcome to out CSC 134 restuarant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    //Calculate tax and total
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;
    
    //Print out receipt details
    //Setting decimal amount to 2
    cout << setprecision(2) << fixed;
    cout << "Thank you for dining with us!" << endl;
    cout << "-----------------------------" << endl; 
    cout << "";
    cout << "Price : $" << item_price << endl;
    cout << "Tax   : $" << tax_amount << endl;
    cout << "-----------------------------" << endl; 
    cout << "Total : $" << total << endl;
    return 0;
}