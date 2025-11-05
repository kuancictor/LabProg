#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, m;
    cin >> n >> m;
    while(n != 0 || m != 0){
        set<int> v, rep;
        int count = 0; 
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            if(v.count(x) == 0){
                v.insert(x);
            }
            else{
                count++;
                rep.insert(x);
            }
        }
        cout << rep.size() << endl;
        cin >> n >> m;
    }
    
    return 0;
}