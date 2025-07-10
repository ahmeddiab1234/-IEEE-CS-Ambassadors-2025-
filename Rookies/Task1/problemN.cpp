#include <iostream>
using namespace std;

int main() {
    int a,b;
    bool correct = true;
    cin >> a >> b;
    string s;
    cin >> s;
    if(s[a] != '-')
        correct = false;
    for(int i=0; i < s.size(); i++) 
    {
        if(i != a)
        {
            if(s[i]-'0' < 0 && s[i]-'0' < 9)
            {
                correct = false;
                break;
            }
            else 
            continue;
        }
        else
        continue;
    }
    if(correct)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}