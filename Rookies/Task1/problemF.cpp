#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* nums = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for(int i = n-1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
/*
3
1   2   3
*/