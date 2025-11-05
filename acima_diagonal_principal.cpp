#include <bits/stdc++.h>
using namespace std;
int main(){
    double m[12][12], sum = 0;
    char S_OU_M;
    cin >> S_OU_M;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            if(j > i){
                sum += m[i][j];
            }
        }
    }
    if(S_OU_M == 'm' || S_OU_M == 'M'){
        printf("%.1lf\n", sum/66.0);
    }
    else{
        printf("%.1lf\n", sum);
    }
    
    return 0;
}