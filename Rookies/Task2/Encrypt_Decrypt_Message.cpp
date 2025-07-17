// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/W

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int find_pos(string str, char ch){
    for(int i=0; i<str.size(); i++){
        if(str[i]==ch) return i;
    }
    return -1;
}

int main(){
    string x="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789",y="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";

    int q;cin>>q;
    string str; cin >> str;
    if(q==1){
        for(int i=0; i<str.size(); i++){
            int pos = find_pos(x,str[i]);
            str[i]=y[pos];
        }
    }
    else{
        for(int i=0; i<str.size(); i++){
            int pos = find_pos(y,str[i]);
            str[i]=x[pos];
        }
    }

    cout << str << endl;

    return 0;
}
