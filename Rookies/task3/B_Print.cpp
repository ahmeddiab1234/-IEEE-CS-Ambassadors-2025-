#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << i;
        if (i < n) {
            cout << ' ';
        }
    }
    cout << endl; 
    return 0;
}