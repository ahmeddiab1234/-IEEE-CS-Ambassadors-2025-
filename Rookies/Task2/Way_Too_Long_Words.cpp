// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(s.length() <= 10)
            cout << s << endl;
        else
        {
            char f = s[0],l = s[s.size() - 1];
            int count = 0;
            for(int j = 1; j < s.size() -1; j++)
            {
                count ++;
            }
            cout << f << count << l << endl;
        }
    }
    return 0;
}