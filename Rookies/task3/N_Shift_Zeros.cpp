#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int* res = new int[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int count=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        if(arr[i] != 0)
        {
            res[i-count] = arr[i];
        }
    }
    for(int i=0; i <count; i++)
    {
        res[n-count +i] =0;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<res[i] << " ";
    }

    return 0;
}