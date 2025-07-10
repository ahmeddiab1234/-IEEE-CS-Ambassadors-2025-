#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int min = nums[0], pos = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (min < nums[i])
            continue;
        else {
            min = nums[i];
            pos = i;
        }
    }
    cout << min << " " << pos + 1 << endl;
    delete[] nums;
    return 0;
}
