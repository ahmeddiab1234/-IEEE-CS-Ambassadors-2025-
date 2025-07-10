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
    for(int i = 0; i < n; i++)
    {
        if(nums[i] < 0)
            nums[i] = 2;
        else if(nums[i] > 0)
            nums[i] = 1;
        cout << nums[i] << " ";
    }
    return 0;
}