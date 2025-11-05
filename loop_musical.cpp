#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        vector<int> v(n);
        int picos = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 0; i < n; i++){
            int prox = v[(i + 1)%n];
            int ant =v[(i - 1 + n)%n];
            if((v[i] > ant && v[i] > prox) || (v[i] < ant && v[i] < prox)){
                picos++;
            }
        }
        cout << picos << endl;
        cin >> n;
    }
    
    return 0;
}