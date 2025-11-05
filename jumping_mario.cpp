#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, i = 0;
    cin >> t;
    while(t--){
        i++;
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int high_j = 0, low_j = 0; 
        for(int i = 0; i < n-1; i++){
            if(v[i] < v[i+1]){
                high_j++;
            }
            else if(v[i] > v[i+1]){
                low_j++;
            }
        }
        cout << "Case " << i << ": " << high_j << " " << low_j << endl;
    }
    
    return 0;
}