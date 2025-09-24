#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length of the String: ";
    cin >> length;
    cin.ignore();
    // Allocate memory for the string +1 for '\0' as string literals do not
    // work without '\0'
    char* str = new char[length + 1];
    cout << "Enter the String: ";
    cin.getline(str, length + 1);

    // Reverse the string by using below logic
    for (int i=0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << "Reversed String: " << str << endl;
    delete[] str;  // freeing the allocated memory
    return 0;
}
