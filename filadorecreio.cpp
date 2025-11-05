#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, valor = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        vector<int> v(m);
        vector<int> b(m);
        for(int j = 0; j < m; j++){
            cin >> v[j];
            b[j] = v[j];
        }
        sort(v.rbegin(), v.rend());
        /*for(int j = 0; j < m; j++){
            cout << v[j] << endl;
            cout << b[j] << endl;
        }*/
        valor = 0;
        for(int j = 0; j < m; j++){
            if(b[j] == v[j]){
                valor++;
            }
        }
        cout << valor << endl;  
    }

    return 0;
}