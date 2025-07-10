#include <iostream>
#include <climits>

using namespace std;

int main() {
        int n;
        cin >> n;
        int* nums = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        int min = nums[0];
        int count = 0;
        for (int i = 0; i < n; i++) {
            if(min >= nums[i]) 
                min = nums[i];
        }
        for (int i = 0; i < n; i++) {
            if(min == nums[i])
                count++;
        }
        if(count % 2 != 0)
            cout<<"Lucky"<<endl;
        else
            cout<<"Unlucky"<<endl;

        delete[] nums;
    return 0;
}