#include <iostream>

using namespace std;


string userInputCin() {
    string input;

    cout << "Insert a phrase, please: ";
    cin >> input;

    for (char c: input) {
        cout << "Character: " << c << endl;
    }

    return input;
}

string userInputCinGetline() {
    string input;

    cout << "Insert a phrase, please: ";
    getline(cin, input);

    for (char c: input) {
        cout << "Character: " << c << endl;
    }

    return input;
}

int main()
{
    int option;
    cout << "[Processing String Input]" << endl;
    cout << "\n1. with cin" << endl;
    cout << "2. with cin + getline" << "\n\n> ";
    cin >> option;
    switch (option) {
        case 1:
            userInputCin();
            break;
        case 2:
            cin.ignore(); // make sure to call this, if calling getline() after
            userInputCinGetline();
            break;
    }
    return 0;
}
