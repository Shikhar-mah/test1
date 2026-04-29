#include <iostream>
#include <cmath> // Required for pow() function

using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // 1. Find the number of digits (order) of the input number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // 2. Sum the nth power of each individual digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // 3. Compare the sum with the original number
    if ((int)result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
