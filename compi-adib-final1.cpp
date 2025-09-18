#include <iostream>
#include <string>
using namespace std;
 
 
bool matchesPattern(const string &s) {
    if (s.empty()) return false;      
    if (s[0] != 'a') return false;     
 
   
    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            return false;  
        }
    }
    return true;
}
 
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);   
 
    if (input.empty()) {
        cout << "No input given!" << endl;
    }
    else if (matchesPattern(input)) {
        cout << "Accepted (string matches a(a+b)*)" << endl;
    }
    else {
        cout << "Rejected (string does not match)" << endl;
    }
 
    return 0;
}
