#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m;
    while(cin >> n >> m){
        ll num = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < m; i++){
            num += v[n - 1 - i];
        }
        cout << num << endl;
    }
    
    return 0;
}