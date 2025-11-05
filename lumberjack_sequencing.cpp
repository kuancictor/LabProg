#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Lumberjacks:" << endl;
    while(n--){
        vector<int> v(10);
        for(int i = 0; i < 10; i++){
            cin >> v[i];   
        }
        
        bool decr = true, cres = true;
        for(int i = 0; i < 9; i++){
            if(v[i] > v[i+1]){
                cres = false;
            }
            if(v[i] < v[i+1]){
                decr = false;
            }
        }

        if(cres || decr){
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;
        }
    }
    
    return 0;
}