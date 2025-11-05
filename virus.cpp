#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    while(cin >> n){
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l = 0, r = n - 1, sum = 0;
        while(l < r){
            if(v[r] - v[l]){
                sum += v[r] - v[l];
            }
            l++;
            r--;
        }
        cout << sum << endl;
    }
    return 0;
}