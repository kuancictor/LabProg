#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        int m = a*b;
        int l = 0, s = 0, input;
        for(int i = 0; i < m; i++){
            cin >> input;
            l += input;
            if(l >= 60){
                l -= 60;
                s++;
            } 
        }
        cout << s << " saca(s) e " << l << " litro(s)" << endl;
    }
    
    return 0;
}