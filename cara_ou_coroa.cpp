#include <bits/stdc++.h>
using namespace std;
#define ll long long;

int main(){
    int n;
    cin >> n;
    while(n > 0){
        int x, count = 0;     
        for(int i = 0; i < n; i++){
            cin >> x;
            if(x == 0){
                count++;
            }
        }
        cout << "Mary won " << count << " times and John won " << abs(n-count) << " times"<< endl;
        cin >> n;
    }
    return 0;
}