#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    int octal[32]; // store digits
    int i = 0;

    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal /= 8;
        i++;
    }

    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--)
        cout << octal[j];
    cout << endl;

    return 0;
}
