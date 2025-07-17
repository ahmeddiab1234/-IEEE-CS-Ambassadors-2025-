/// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/P

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    bool inWord = false;

    for(int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            if(!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    
    cout << count << endl;
    return 0;
}