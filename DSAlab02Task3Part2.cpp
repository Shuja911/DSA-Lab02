#include <iostream>
using namespace std;

void analyze_pointer(int* ptr) {
    cout << "Memory address stored in pointer: " << ptr << endl;
    cout << "Value at that address: " << *ptr << endl;
}
int main() {
    // Stack allocation, ordinary (stack) variable and passing its address
    int iValue = 100;
    cout << "--- Analyzing stack variable ---" << endl;
    analyze_pointer(&iValue);
    //  Heap allocation, allocating int on heap, assigning value
    int* heapValue = new int;     
    *heapValue = 200;
    cout << "\n--- Analyzing heap variable ---" << endl;
    analyze_pointer(heapValue);

    delete heapValue;   //memory cleanup
    return 0;
}
