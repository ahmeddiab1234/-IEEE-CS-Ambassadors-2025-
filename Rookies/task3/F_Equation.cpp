#include <iostream>
#include <cmath>

using namespace std;

long long fun(int x, int n)
{
    long long res = 0;
    for(int i = 0; i <= n; i += 2)
    {
        if (i == 0)
            res += 1 - 1;
        else
            res += pow(x, i);
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << fun(a, b) << endl;
    return 0;
}