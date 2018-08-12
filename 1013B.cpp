#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    map<int, int> M, N;
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = a[i] & x;
        M[a[i]]++;
        N[b[i]]++;
    }
    // cout << "rea\n";
    bool flg = false;
    for(int i = 0 ; i < n ; i++){
        if(M[a[i]] > 1){
            cout << "0\n";
            return 0;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(N[a[i]] > 1 || N[a[i]] == 1 and a[i] != b[i]){
            cout << "1\n";
            return 0;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(N[b[i]] > 1){
            cout << "2\n";
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}