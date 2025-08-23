#include <iostream>
using namespace std;

int main() {
    char input[200];
    cout << "Enter a line: ";
    cin.getline(input, 200);


    if (input[0] == '/' && input[1] == '/') {
        cout << "This is a single line comment" << endl;
    }

    else {
        int i = 0;
        bool startsWithSlashStar = (input[0] == '/' && input[1] == '*');
        bool endsWithStarSlash = false;


        while (input[i] != '\0') i++;
        if (i >= 2 && input[i-2] == '*' && input[i-1] == '/') {
            endsWithStarSlash = true;
        }

        if (startsWithSlashStar && endsWithStarSlash) {
            cout << "This is a multiple line comment" << endl;
        }
        else {
            cout << "This is not a comment" << endl;
        }
    }

    return 0;
}

