#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k;
    while(cin >> n >> k){
        ll cigar = n, bitucas = n;
        while(bitucas >= k){
            ll novo = bitucas/k;
            cigar += novo;
            bitucas = novo + (bitucas % k);
        }
        cout << cigar << endl;
    }
    
    return 0;
}