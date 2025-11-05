#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    while(cin >> n){
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(auto &it : v){
            cout << it << endl;
        }
    }
    return 0;
}