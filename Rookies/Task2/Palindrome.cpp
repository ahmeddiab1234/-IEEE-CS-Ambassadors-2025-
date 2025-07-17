//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string r="";
    for(int i=s.size()-1; i>=0; i--)
    {
        r += s[i];
    }
    if(s == r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}