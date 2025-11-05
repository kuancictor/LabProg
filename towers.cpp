#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    unordered_map<int, int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[x]++;
    }
    int mx = INT_MIN;
    for(auto [itk, itv] : v){
        mx = max(mx, itv);
    }
    cout << mx << " " << v.size() << endl;
    return 0;
}