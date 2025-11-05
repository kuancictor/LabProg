#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> v;
        bool flag = false;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(v.count(x) == 0){
                v.insert(x);
            }
            else{
                flag = true;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}