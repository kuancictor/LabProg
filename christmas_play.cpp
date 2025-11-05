#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int menor = INT_MAX;
        for(int i = k-1; i < n; i++){
            menor = min(menor, v[i] - v[i-k+1]); 
        }
        cout << menor << endl;
    }
    
    return 0;
}