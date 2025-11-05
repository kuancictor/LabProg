#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, q, e;
    cin >> n >> q;
    vector<int> mesa(n+1);
    for(int i = 1; i <= n; i++){
        mesa[i] = i;
    }
    while(q--){
        cin >> e;
        if(e == 1){
            int a, b;
            cin >> a >> b;

            int aux = mesa[b];
            mesa[b] = mesa[a];
            mesa[a] = aux;
        }
        else if(e == 2){
            int a, count = 0;
            cin >> a;
            int x = a;
            while(1){
                if(a == mesa[x]){
                    break;
                }
                else{
                    x = mesa[x];
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}