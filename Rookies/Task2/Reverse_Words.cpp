// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string r = "";
    string word = "";
    
    for (char c : s) {
        if (c == ' ') {
            for (int j = word.length() - 1; j >= 0; j--) {
                r += word[j];
            }
            r += ' ';
            word = "";
        } else {
            word += c;
        }
    }
    
    for (int j = word.length() - 1; j >= 0; j--) {
        r += word[j];
    }

    cout << r << endl;

    return 0;
}