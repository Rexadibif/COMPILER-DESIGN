#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// helper: check only 'a'/'b'
bool allAB(const string& s) {
    for (char c : s) if (c!='a' && c!='b') return false;
    return true;
}

// L1: a(a+b)*
bool isL1(const string& s) {
    if (s.empty()) return false;
    if (s[0] != 'a') return false;
    return allAB(s);
}

// L2: a(a+b)* + b
bool isL2(const string& s) {
    if (s == "b") return true;
    return isL1(s);
}

// L3: a(a+b)* + b*
bool isL3(const string& s) {
    bool onlyBs = true;
    for (char c : s) if (c!='b') { onlyBs = false; break; }
    if (onlyBs) return true;   // includes ε
    return isL1(s);
}

int main() {
    ifstream fin("input.txt");
    if (!fin) {
        cerr << "Error: cannot open input.txt\n";
        return 1;
    }

    string s;
    while (fin >> s) {
        bool l1 = isL1(s);
        bool l2 = isL2(s);
        bool l3 = isL3(s);

        bool printed = false;
        if (l1) { cout << s << " -> a(a+b)*\n"; printed = true; }
        if (l2) { cout << s << " -> a(a+b)* + b\n"; printed = true; }
        if (l3) { cout << s << " -> a(a+b)* + b*\n"; printed = true; }
        if (!printed) cout << s << " -> NONE\n";
    }
    return 0;
}
