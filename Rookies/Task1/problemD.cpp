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
        if(nums[i] <= 10 )
            cout<<"A["<<i<<"]"<<" = "<<nums[i]<<endl;
    }
    return 0;
}