#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;  cin >> t;  while(t--){
        int n;  cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){cin >> arr[i];}
        
        vector<int> res;
        for(int i=0; i<n; i++){
            vector<int> branch;
            for(int j=i; j<n; j++){
                branch.push_back(arr[j]);
                int num=*max_element(branch.begin(),branch.end());
                res.push_back(num);
            }
            branch.clear();
        }
        
        for(int r:res) cout << r << ' ';
        cout << endl;
    }
}

