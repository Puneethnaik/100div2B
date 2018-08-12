#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    map<int, int> M;
    for(int i = 0 ; i < m ; i++){
        cin >> a[i];
        M[a[i]]++;
    }
    int val = m / n;
    for(int i = val; i >= 1 ; i--){
        int cnt = 0;
        for(auto it : M){
            cnt += it.second / i;
        }
        // cout << "for " << i << " cnt " << cnt << endl;
        if(cnt >= n){
            cout << i << endl;
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}