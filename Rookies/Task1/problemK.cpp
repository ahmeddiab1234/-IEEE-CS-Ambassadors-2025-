#include <iostream>
#include <string>

using namespace std;

int main() {
        int n;
        cin >> n;
        int sum = 0;
        string str_n;
        cin >> str_n;
        for (int i = 0; i < str_n.size(); i++) {
            sum += str_n[i]- '0';
        }
        cout << sum << endl;
    return 0;
}