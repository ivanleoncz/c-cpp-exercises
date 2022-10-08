#include <iostream>

using namespace std;

int main()
{
    int * ptr;
    int howManyNumbers;

    cout << "How many numbers would you like to input? ";
    cin >> howManyNumbers;

    ptr = new int[howManyNumbers];

    for (int i=0; i < howManyNumbers; i++) {
        cout << "Input an integer number [" << i+1 << "]: ";
        cin >> ptr[i];
    }

    cout << "Inputed numbers: " << endl;
    for (int i=0; i < howManyNumbers; i++) {
        cout << ptr[i] << " ";
    }

    cout << "\n";

    delete[] ptr;

    return 0;
}
