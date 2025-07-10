#include <iostream>
#include <climits>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int* nums = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int min_sum = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int current_sum = nums[i] + nums[j] + j - i;
                if (current_sum < min_sum) {
                    min_sum = current_sum;
                }
            }
        }

        cout << min_sum << endl;
        delete[] nums; 
    }
    return 0;
}