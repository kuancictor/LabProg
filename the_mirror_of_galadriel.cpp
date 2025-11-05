#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, rs;
        cin >> s;
        rs = s;
        reverse(rs.begin(), rs.end());
        if(s == rs){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}