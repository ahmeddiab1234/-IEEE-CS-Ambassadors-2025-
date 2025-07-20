#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    int* res = new int[n*2];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for(int i = 0; i < n; i++)
    {
        res[i] = arr2[i];
    }
    for(int i = 0; i < n; i++)
    {
        res[i+n] = arr1[i];
    }
    for(int i = 0; i < 2*n; i++)
    {
        cout << res[i] << " ";
    }
    delete[] arr1;
    delete[] arr2;
    delete[] res;
    return 0;
}

