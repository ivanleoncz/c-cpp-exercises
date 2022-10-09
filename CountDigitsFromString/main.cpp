#include <iostream>

using namespace std;

int main()
{
    int number_0 = 0;
    int number_1 = 0;
    int number_2 = 0;
    int number_3 = 0;
    int number_4 = 0;
    int number_5 = 0;
    int number_6 = 0;
    int number_7 = 0;
    int number_8 = 0;
    int number_9 = 0;

    string stringInput;

    cout << "Type a string: ";
    getline(cin, stringInput);

    for (char c : stringInput) {
        if (c == '0') {
            number_0++;
        } else if (c == '1') {
            number_1++;
        } else if (c == '2') {
            number_2++;
        } else if (c == '3') {
            number_3++;
        } else if (c == '4') {
            number_4++;
        } else if (c == '5') {
            number_5++;
        } else if (c == '6') {
            number_6++;
        } else if (c == '7') {
            number_7++;
        } else if (c == '8') {
            number_8++;
        } else if (c == '9') {
            number_9++;
        }
    }
    cout << "Ocurrencies on the string per number: " << endl;
    cout << "Number 0: " << number_0 << endl;
    cout << "Number 1: " << number_1 << endl;
    cout << "Number 2: " << number_2 << endl;
    cout << "Number 3: " << number_3 << endl;
    cout << "Number 4: " << number_4 << endl;
    cout << "Number 5: " << number_5 << endl;
    cout << "Number 6: " << number_6 << endl;
    cout << "Number 7: " << number_7 << endl;
    cout << "Number 8: " << number_8 << endl;
    cout << "Number 9: " << number_9 << endl;

    return 0;
}
