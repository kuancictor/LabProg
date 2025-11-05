#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        sort(v.begin(), v.end());
        bool s = true;

        for(int i = 0; i < n - 1; i++){
            if(v[i+1] - v[i] > 1){
                s = false;
                break;
            }
        }   
        
        if(s){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}