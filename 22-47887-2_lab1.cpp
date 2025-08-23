#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    bool isNumeric = true;


    for (char c : input) {
        if (c < '0' || c > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "Numeric Constant" << endl;
    else
        cout << "Not Numeric" << endl;

    return 0;
}

