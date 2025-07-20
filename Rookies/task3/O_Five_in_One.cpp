#include <bits/stdc++.h>
using namespace std;
#define ll long long

int cnt_prime(vector<int> arr){
    int cnt = 0;
    for (int val : arr) {
        if (val < 2) continue;
        bool is_prime = true;
        for (int j = 2; j * j <= val; j++) {
            if (val % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) cnt++;
    }
    return cnt;
}


int cnt_palindrom(const vector<int>& arr){
    int cnt = 0;
    for (int num : arr) {
        num = abs(num);
        string s = to_string(num);
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (s == rev) cnt++;
    }
    return cnt;
}


int cnt_devisors(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cnt++;
    }
    return cnt;
}


int max_devisors(vector<int> arr){
    int max_cnt = 0, max_val = 0;
    for (int num : arr) {
        int cnt = cnt_devisors(num);
        if (cnt > max_cnt || (cnt == max_cnt && num > max_val)) {
            max_cnt = cnt;
            max_val = num;
        }
    }
    return max_val;
}


void solve(vector<int> arr){
    cout << "The maximum number : " << *max_element(arr.begin(),arr.end()) << endl;
    cout << "The minimum number : " << *min_element(arr.begin(),arr.end()) << endl;
    cout << "The number of prime numbers : " << cnt_prime(arr) << endl;
    cout << "The number of palindrome numbers : " << cnt_palindrom(arr) << endl;
    cout << "The number that has the maximum number of divisors : " << max_devisors(arr) << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){cin >> arr[i];}
    solve(arr);

    return 0;
}

