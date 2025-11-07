#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, k, max = 240, sum = 0, c = 0;
    cin >> n >> k;
    for(size_t i = 1; i <= n; i++){
       sum += 5 * i;
       if(sum > max - k){
        break;
       } 
       c++;
    }
    cout << c << endl;
    return 0;
}