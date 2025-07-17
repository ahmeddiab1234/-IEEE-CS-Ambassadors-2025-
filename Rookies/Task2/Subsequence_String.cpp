// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/M


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == res[j]) {
            j++;
        }
        if (j == res.size()) {
            break;
        }
    }

    if (j == res.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
