#include <iostream>
using namespace std;

int main() {
    char input[100];
    cout << "Enter input: ";
    cin >> input;


    char first = input[0];
    if (!((first >= 'A' && first <= 'Z') ||
          (first >= 'a' && first <= 'z') ||
          first == '_')) {
        cout << "Not an identifier" << endl;
        return 0;
    }


    int i = 1;
    bool isIdentifier = true;
    while (input[i] != '\0') {
        char c = input[i];
        if (!((c >= 'A' && c <= 'Z') ||
              (c >= 'a' && c <= 'z') ||
              (c >= '0' && c <= '9') ||
              c == '_')) {
            isIdentifier = false;
            break;
        }
        i++;
    }

    if (isIdentifier)
        cout << "Valid Identifier" << endl;
    else
        cout << "Not an identifier" << endl;

    return 0;
}

