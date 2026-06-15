#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    char hex[32];
    int i = 0;

    while (decimal > 0) {
        int rem = decimal % 16;
        if (rem < 10)
            hex[i] = rem + '0';
        else
            hex[i] = rem - 10 + 'A';
        decimal /= 16;
        i++;
    }

    cout << "Hexadecimal: ";
    for (int j = i - 1; j >= 0; j--)
        cout << hex[j];
    cout << endl;

    return 0;
}
