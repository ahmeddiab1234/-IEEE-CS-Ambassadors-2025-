// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--)
    {
        string s, t;
        cin >> s >> t;
        string r = "";
        int minLength = min(s.size(), t.size());
        
        for(int i = 0; i < minLength; i++)
        {
            r += s[i];  
            r += t[i];  
        }

        if(s.size() > t.size())
        {
            r += s.substr(minLength);
        }
        else if(t.size() > s.size())
        {
            r += t.substr(minLength);
        }
        
        cout << r << endl; 
    }
    
    return 0;
}
