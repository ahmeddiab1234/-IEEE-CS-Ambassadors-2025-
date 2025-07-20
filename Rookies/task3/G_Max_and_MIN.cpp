#include <iostream>
#include <sstream>

using namespace std;

string min_max(int x, int* arr)
{
    int min = arr[0], max = arr[0];
    for(int i = 1; i < x; i++)
    {
        if(min > arr[i]) 
            min = arr[i];
        else if(max < arr[i]) 
            max = arr[i];
    }
    
    ostringstream result;
    result << min << " " << max;
    return result.str();
}

int main() {
    int x;
    cin >> x;
    int *x_nums = new int[x];
    for(int i = 0; i < x; i++)
    {
        cin >> x_nums[i];
    }
    cout << min_max(x, x_nums) << endl;
    delete[] x_nums; 
    return 0;
}