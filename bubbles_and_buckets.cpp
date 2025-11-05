#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll jogadas = 0;
void merge(vector<int> &v, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> L(n1), R(n2);

    for(int i = 0; i < n1; i++){
        L[i] = v[l + i];
    }
    for(int j = 0; j < n2; j++){
        R[j] = v[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            v[k] = L[i];
            i++;
        }
        else{
            v[k] = R[j];
            j++;
            jogadas += (n1 - i);
        }
        k++;
    }

    while(i < n1){
        v[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        v[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(vector<int> &v, int l, int r){
    if(l < r){
        int mid = l + (r - l)/2;
        merge_sort(v, l, mid);
        merge_sort(v, mid + 1, r);
        merge(v, l, mid, r); 
    }
}

int main(){
    int n;
    while(cin >> n && n > 0){
        jogadas = 0;
        vector<int> v(n);
        for(size_t i = 0; i < n; i++){
            cin >> v[i];
        }
        merge_sort(v, 0, n - 1);
        if(jogadas % 2 == 0){
            cout << "Carlos" << endl;
        }
        else{
            cout << "Marcelo" << endl;
        }
    }
    
    return 0;
}