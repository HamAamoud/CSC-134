//Hamza Aamoid
//M2HW pt 2

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Question 2" << endl;
    //Setting cost/charge ratios as constant
    const double COST_PER_FT_CUBED = 0.3;
    const double MAX_CHARGE_PER_FT_CUBED = 0.52;

    //Initializing our variables
    double length, width, height, volume;
    double cost, charge, profit;

    //Formating output so dollar values look nice (2 decimal places, showpoint forces this to appear even when .00)
    cout << setprecision(2) << fixed << showpoint;

    //Taking dimensions from user
    cout << "Enter the length of the crate in feet: " << endl;
    cin >> length;
    cout << "Enter the width of the crate in feet: " << endl;
    cin >> width;
    cout << "Enter the height of the crate in feet: " << endl;
    cin >> height;

    //Calculating volume and pricing
    volume = width * length * height;
    cost = volume * COST_PER_FT_CUBED;
    charge = volume * MAX_CHARGE_PER_FT_CUBED;
    profit = charge - cost;

    //Output of data
    cout << "The crate will have volume: " << volume << " ft cubed" << endl;
    cout << "Cost to build: $" << cost << endl;
    cout << "Maximium Charge to customers: $" << charge << endl;
    cout << "Maximium Profit: $" << profit << endl;
    return 0;
}