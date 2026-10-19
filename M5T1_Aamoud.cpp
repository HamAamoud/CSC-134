//Hamza Aamoud
//CSC 134
//10-19-2024
//Practising Basic Functions

#include <iostream>
using namespace std;

void greet();
void speak (string message);

int num_add(int num);
int num_double(int num);

int main(){
    cout << "Void function example" << endl;
    greet();
    speak("Hello World");
    speak("Another message");
    int  number;
    cout << "Enter an integer: ";
    cin >> number;
    
    int answer = num_add(number);
    cout << "num_add(" << number << ") returns: " << answer << endl;
   
    answer = num_double(number);
    cout << "num_double(" << number << ") returns: " << answer << endl;

    return 0;
}

void greet(){
    cout << "What's up?" << endl;
}

void speak (string message) {
    cout << message << endl;
}

int num_add (int num){
    num++;
    return num;
}

int num_double (int num){
    num = num * 2;
    return num;
}