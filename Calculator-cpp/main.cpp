#include <iostream>

using namespace std;

#define WELCOME (cout << "\n--------------------------\nWelcome to Calculator-cpp!\n--------------------------\n")

int sum(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int main()
{
    int a, b, operation, result;
    char stop = 'n';

    while (true) {
        WELCOME;
        cout << "1st number: ";
        cin >> a;
        cout << "2nd number: ";
        cin >> b;
        cout << "\nOperation:\n1: sum\n2: subtract\n3: multiply\n4: divide\n> ";
        cin >> operation;
        switch (operation) {
            case 1:
                result = sum(a, b);
                break;
            case 2:
                result = subtract(a, b);
                break;
            case 3:
                result = multiply(a, b);
                break;
            case 4:
                result = divide(a, b);
                break;
        }
        cout << "Result: " << result << endl;
        cout << "\nStop calculator (y + <return> == yes, <return> == no)?";
        cin >> stop;
        if (stop == 'y') {
            break;
        }
    }

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}
