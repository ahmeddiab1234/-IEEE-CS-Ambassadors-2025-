// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string r = "";
    for(int i = 0; i < s.size(); i++) 
    {
        if(s[i] == ',')
            r += " ";
        else
        {
            if(int(s[i]) >= 65 && int(s[i]) <= 90)
            {
                s[i] = s[i] + 32;
                r += s[i];
            }
            else if(int(s[i]) >= 97 && int(s[i]) <= 122)
            {
                s[i] = s[i] - 32;
                r += s[i];
            }
        }
    }
    cout << r << endl;
    return 0;
}