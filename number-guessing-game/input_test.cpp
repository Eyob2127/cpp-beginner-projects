#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Invalid input! Enter a number: ";
        cin >> number;
    }

    cout << "Your number is: " << number << endl;

    return 0;
}