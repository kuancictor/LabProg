#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(const pair<string, int> &a,const pair<string, int> &b){
    if(a.second == b.second){
        return b.first > a.first;
    }
    return b.second < a.second;
}
int main(){
    int n, ins = 0;
    while(cin >> n){
        ins++;
        vector<pair<string, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), compare);
        cout << "Instancia " << ins << endl;
        cout << v.back().first << endl << endl;
    }
    
    return 0;
}