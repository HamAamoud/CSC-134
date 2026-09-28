//Hamza Aamoud
//M2HW pt 3

#include <iostream>
using namespace std;

int main()
{
    //Setting Constant
    const int SLICES_PER_VISITOR = 3;

    //Initializing vars
    int pizzaBoxes, slicesPerPizza, totalSlices, vistorAmount, leftover;

    //Getting number of pizzas and people
    cout << "How many pizzas would you like? : ";
    cin >> pizzaBoxes;
    cout << "How many slices do you want per pizza? : ";
    cin >> slicesPerPizza;
    cout << "How many people are attending? : ";
    cin >> vistorAmount;

    //Checking if you have enough pizza
    totalSlices = pizzaBoxes * slicesPerPizza;
    if (totalSlices < vistorAmount * 3) {
        cout << "You wont have enough pizza!!!!" << endl;
        return 0;
    }

    //Calculting pizza leftovers
    leftover = totalSlices % (vistorAmount * 3);

    //Output amount leftover
    cout << "You will have " << leftover << " slices leftover!";
    return 0;
}