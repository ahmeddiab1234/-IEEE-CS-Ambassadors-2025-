#include <iostream>
#include <iomanip>

using namespace std;

double avg(int x, double* arr) {
    double sum = 0.0;
    for(int i = 0; i < x; i++) {
        sum += arr[i];
    }
    double average = sum / x;
    return average;
}

int main() {
    int x;
    cin >> x;
    double* arr = new double[x];
    for(int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    cout << fixed << setprecision(7) << avg(x, arr) << endl;

    delete[] arr;

    return 0;
}