#include <bits/stdc++.h>
using namespace std;
//525991
int main(){
    int n, i = 0, f1 = 0, f2 = 1, fb = 0;
    cin >> n;
    int seq[41];

    for(int i = 0; i < n-1; i++){
        fb = f1 + f2;
        f1 = f2;
        f2 = fb;
        seq[i] = fb;
    }
    n--;
    while(n--){
        cout << seq[n] << " ";
    }
    cout << "1" << "\n";
    return 0;
}