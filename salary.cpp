#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    int *salArray = new int[size];   // dynamically allocate memory

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i);   // using pointer arithmetic
    }

    // Applying increment formula
    for (int i = 0; i < size; i++) {
        *(salArray + i) = *(salArray + i) + (*(salArray + i) / (i + 1));
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << "$ ";
    }
    cout << endl;

    delete [] salArray;   // free dynamically allocated memory
    return 0;
}
