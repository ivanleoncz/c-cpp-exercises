#include <iostream>

using namespace std;


int sumArray(int *numbers, int arraySize) {
    /*
     * Sums all array elements.
     */

    int result = numbers[0];

    for (int i=1; i < arraySize; i++) {
        result += numbers[i];
    }

    return result;
}

int getHighestNumberFromArray(int *numbers, int arraySize) {
    /*
     * Checks element by element, determining which element has the highest value of all.
     */

    int left = numbers[0];

    for (int i=1; i < arraySize; i++) {
        if (left < numbers[i]) {
            left = numbers[i];
        }
    }

    return left;
}


int main()
{
    const int arraySize = 5;
    int numbers[arraySize] = {2, 11, 1, 13, 7};

    cout << "- sum:            " << sumArray(numbers, arraySize) << endl;
    cout << "- highest number: " << getHighestNumberFromArray(numbers, arraySize) << endl;

    return 0;
}
