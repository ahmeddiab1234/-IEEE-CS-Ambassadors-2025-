#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int b;
    int* nums = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int res =-1;
    cin >> b;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == b)
        {
            res = i;
            break;
        }
        
    }
    cout << res << endl;
    return 0;
}