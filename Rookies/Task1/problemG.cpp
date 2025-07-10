#include <iostream>

using namespace std;

int main() {
    bool found = true;
    int n;
    cin >> n;
    int* nums = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(nums[i] != nums[n-i-1])
        {
            found = false;
            break;
        }
        else 
            continue;
    }
    if(found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
/*
3
1   2   3
*/