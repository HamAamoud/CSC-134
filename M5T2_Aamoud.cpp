//Hamza Aamoud
//CSC 134
//M5T2
//10-28-26
//Passing variables through functions

/*
Main will loop from 1 to 10, passing the current value to a function that squares the number and returns the result.
That result is then passed to a function that will print each number and resulting square.
*/
#include <iostream>
using namespace std;

int square (int num);
void print_Answer_Line (int num,int squared);
int main () {
    int num = 1;
    while (num <= 10){
        int squared = square(num);
        print_Answer_Line(num, squared);
        num++;
    }
    return 0;
}

int square (int num) {
    int squared = num * num;
    return squared;
}

void print_Answer_Line (int num, int squared) {
    cout << num << " squared equals " << squared << endl;
}