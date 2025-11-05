#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, f = 1;

    while(scanf("%d", &a) != EOF){
        if(a == 42){
            f = 0;
        }
        if(f){
            cout << a << endl; 
        }
    }
    

    return 0;
}