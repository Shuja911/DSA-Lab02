#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    // Printing the memory address stored in the pointer
    cout << "Memory address stored in pointer: " << ptr << endl;

    // Printing the value stored at that memory address
    cout << "Value at that address: " << *ptr << endl;
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    int* p = &number;
    analyze_pointer(p);

    return 0;
}
