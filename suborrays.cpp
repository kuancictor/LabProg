#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        int mid = (n+1)/2;
        v.push_back(mid);

        int l = mid - 1;
        int r = mid + 1;
        while(l > 0 || r <= n){
            if(l > 0){
                v.push_back(l--);
            }
            if(r <= n){
                v.push_back(r++);
            }
        }
        for(int x : v){
            cout << x << " ";
        }
        cout << "\n";
    }
    
    return 0;
}