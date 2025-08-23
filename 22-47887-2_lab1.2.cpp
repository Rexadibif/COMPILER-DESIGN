#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    string operators = "+-*/%=";
    int count = 1;

    for (char c : input) {

        for (char op : operators) {
            if (c == op) {
                cout << "operator" << count << ":  " << c << endl;
                count++;
            }
        }
    }

    if (count == 1) {
        cout << "No operator found." << endl;
    }

    return 0;
}
ouUAHFIO
