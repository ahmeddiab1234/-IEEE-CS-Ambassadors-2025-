#include <iostream>
#include <cmath>

using namespace std;

string primary(int n)
{
    if (n <= 1) return "NO";
    if (n == 2) return "YES"; 
    if (n % 2 == 0) return "NO"; 

    bool is_primary = true;
    for(int i = 3; i <= sqrt(n); i += 2)
    {
        if(n % i == 0)
        {
            is_primary = false;
            break;
        }
    }
    if(is_primary) return "YES";
    else return "NO";
}

int main() {
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        cout << primary(n) << endl;
    }
    return 0;
}