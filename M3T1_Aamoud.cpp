// CSC 134
// M3T1 
// norrisa
// 2/17/2025
// Ask the user for the width and length of two rectangles
// Find the area

#include <iostream>
using namespace std;


int main() {

    // Variables
    double len1, wid1, len2, wid2; 
    double area1, area2;

    // Ask user for the length and width
    cout << "What's the length of the first rectangle? ";
    cin >> len1;
    cout << "What's the width of the first rectangle? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle? ";
    cin >> len2;
    cout << "What's the width of the second rectangle? ";
    cin >> wid2;

    // Find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    // Print the area
    cout << "Area 1 = " << area1 << endl;
    cout << "Area 2 = " << area2 << endl;

    //Comparing both areas
    if (area1 > area2) {
        cout << "Area 1 is larger" << endl;
    }
    else if (area2 > area1) {
        cout << "Area 2 is larger" << endl;
    }
    else if (area1 == area2) {
        cout << "The area of the rectangles are the same" << endl;
    }
    return 0;
}