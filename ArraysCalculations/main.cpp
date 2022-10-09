#include <iostream>

using namespace std;

int sumArray(int arrayOfNumbers[10], int operation, int &amountOfInputs) {
    // First input is separated from the iteration of the array, in order to
    // perform operation and replace.
    int result = arrayOfNumbers[0];
    // And iteration over array of numbers starts from index 1.
    for (int i = 1; i < amountOfInputs; i++ ) {
        if (operation == 1) {
            result+= arrayOfNumbers[i];
        } else if (operation == 2) {
            result-= arrayOfNumbers[i];
        } else if (operation == 3) {
            result*= arrayOfNumbers[i];
        } else if (operation == 4) {
            result/= arrayOfNumbers[i];
        }
    }
    return result;
}

int main()
{
    const int ARRAY_SIZE = 10;
    int arrayOfNumbers[ARRAY_SIZE] = {};
    int amountOfInputs;
    int operation; // 1: sum, 2: subtract, 3: multiply, 4: divide
    int input;
    bool correctInput = false;

    while (!correctInput) {
        cout << "\nHow many numbers do you want to input (max -> " << ARRAY_SIZE << "): ";
        cin >> amountOfInputs;
        if (amountOfInputs > 0 && amountOfInputs < 10) {
            correctInput = true;
        } else {
            cout << "[error]: from 1 to 10, please" << endl;
        }
    }

    if (amountOfInputs <= ARRAY_SIZE) {
        for (int i = 0; i < amountOfInputs; i++ ) {
            cout << "Number " << i+1 << ": ";
            cin >> input;
            arrayOfNumbers[i] = input;
        }
    }

    correctInput = false;
    while (!correctInput) {
        cout << "\n\nWhat operation should be performed with the numbers ?" << endl;
        cout << "1: sum" << endl;
        cout << "2: subtract" << endl;
        cout << "3: multiply" << endl;
        cout << "4: divide" << endl;
        cin >> operation;
        if (operation >= 1 && operation <= 4) {
            correctInput = true;
        } else {
            cout << "[error]: select one of the arithmetic operations, from 1 to 4";
        }
    }

    cout << "\nCalculating..." << endl;
    cout << "Result: " << sumArray(arrayOfNumbers, operation, amountOfInputs);
    cout << "\n";

    return 0;
}
