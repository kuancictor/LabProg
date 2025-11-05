#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t > 0){
        bool flag = false;
        int count = 0;
        while(!flag){
            count++;
            vector<int> v(t);
            for(int i = 0; i < t; i++){
                cin >> v[i];
            }
            if(is_sorted(v.begin(), v.end())){
                flag = true;
                cout << count << endl;
            }
        }
        cin >> t;
    }
    
    
    
    return 0;
}