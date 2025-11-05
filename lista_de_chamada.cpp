#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k;
    cin >> n >> k;
    vector<string> l(n);
    for(int i = 0; i < n; i++){
        cin >> l[i];
    } 
    sort(l.begin(), l.end());
    cout << l[k-1] << endl;
    return 0;
}