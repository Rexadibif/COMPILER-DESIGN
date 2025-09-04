#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isValidDeclaration(const string& input) {
    // very basic check: must end with ';' and contain '(' and ')'
    if (input.empty()) return false;
    if (input.back() != ';') return false;
    if (input.find('(') == string::npos || input.find(')') == string::npos) return false;
    return true;
}

string convertToDefinition(const string& decl) {
    // remove the trailing semicolon
    string def = decl.substr(0, decl.size() - 1);

    // add empty function body
    def += " {\n    // function body\n}";
    return def;
}

int main() {
    string input;
    cout << "Enter a function declaration: ";
    getline(cin, input);

    if (isValidDeclaration(input)) {
        cout << "Valid declaration detected.\n";
        cout << "Converted definition:\n";
        cout << convertToDefinition(input) << endl;
    } else {
        cout << "Invalid function declaration!" << endl;
    }

    return 0;
}

