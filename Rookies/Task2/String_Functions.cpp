// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/L

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,q; cin >> n >> q;
    string str;   cin >> str;
    int old_q=q;

    while (q--) {
        string s;
        cin >> s;

        if (s == "pop_back") {
            if (!str.empty()) str.pop_back();
        }
        else if (s == "front") {
            if (!str.empty()) cout << str[0] << endl;
        }
        else if (s == "back") {
            if (!str.empty()) cout << str[str.size() - 1] << endl;
        }
        else if (s == "sort") {
            int l, r; cin >> l >> r;
            l--, r--;
            if(l >= r) swap(l,r);
            if (l >= 0 && r < str.size())
                sort(str.begin() + l, str.begin() + r + 1);
        }
        else if (s == "reverse") {
            int l, r; cin >> l >> r;
            l--, r--;
            if(l >= r) swap(l,r);
            if (l >= 0 && r < str.size())
                reverse(str.begin() + l, str.begin() + r + 1);
        }
        else if (s == "print") {
            int pos; cin >> pos;
            --pos;                   
            if (pos >= 0 && pos < str.size())
                cout << str[pos] << "\n";
        }
        else if (s == "push_back") {
            char x; cin >> x;
            str.push_back(x);
        }
        else if (s == "substr") {
            int l, r; cin >> l >> r;
            l--, r--;
            if(l >= r) swap(l,r);
            if (l >= 0 && r < str.size())
                cout << str.substr(l, r - l + 1) << endl;
        }
    }

    return 0;
}
