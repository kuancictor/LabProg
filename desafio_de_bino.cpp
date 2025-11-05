#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> v(t), n = {0, 0, 0, 0, 0};
    for(int i = 0; i < t; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < t; i++){
        if(v[i]%2 == 0){
            n[0]++;
        }
        if(v[i]%3 == 0){
            n[1]++;
        }
        if(v[i]%4 == 0){
            n[2]++;
        }
        if(v[i]%5 == 0){
            n[3]++;
        }
    }

    for(int i = 0; i < 4; i++){
        cout << n[i] << " Multiplo(s) de " << (2+i) << endl; 
    }
    
    return 0;
}