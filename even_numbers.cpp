#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x%2 != 0){
            v[i] = x;
        }
        else{
            string bin;
            int temp = x;
            while(temp > 0){
                bin = char((temp % 2) + '0') + bin;
                temp /= 2;
            }
            reverse(bin.begin(), bin.end());
            x = stoi(bin, nullptr, 2);
            v[i] = x; 
        }
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
    
    return 0;
}