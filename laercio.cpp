#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v1;
        for(int i = 0; i < n; i++){
            int aux;
            cin >> aux;
            if(aux % 2 != 0){
                v1.push_back(aux);
            }
        }
        sort(v1.begin(), v1.end());
        vector<int> res;
        int l = 0, r = v1.size()-1;
        bool aux = true;
        while(l <= r){
            if(aux){
                res.push_back(v1[r]);
                r--;
                aux = false;
            }
            else{
                res.push_back(v1[l]);
                l++;
                aux = true;
            }
        }

        for(int i = 0; i < res.size(); i++){
            cout << res[i];
            if(i < res.size() - 1){
                cout << " ";
            }
        }
        cout << endl;
    } 
    return 0;
}