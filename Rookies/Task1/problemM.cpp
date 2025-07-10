#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int *nums = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int min= nums[0],max = nums[0];
    for(int i = 1; i < n; i++)
    {
        if(min >= nums[i])  min = nums[i];
        else if(max <= nums[i]) max = nums[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == min ) nums[i] = max;
        else if(nums[i] == max) nums[i] =min;
        cout<<nums[i]<< " ";
    }
    return 0;
}