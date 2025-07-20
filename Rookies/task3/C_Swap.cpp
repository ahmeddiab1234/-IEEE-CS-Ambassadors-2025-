#include <iostream>

using namespace std;

void swap(int x, int y) 
{
    int s =x;
    x = y; 
    y = s;
    cout << x << " " << y << endl;
}

int main() {
    int a,b;
    cin >> a >> b;
    swap(a,b);
    return 0;
}