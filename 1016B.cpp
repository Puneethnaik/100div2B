#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, q;
    cin >> n >> m >> q;
    string s, t;
    cin >> s >> t;
    vector<int> ans(n + 1);
    for(int i = 0 ; i < (n - m + 1) ; i++){
        string P;
        for(int j = 0 ; j < m ; j++){
            P += s[i + j];
        }
        // cout << i + 1 << " " << P << endl;
        if(!P.compare(t)){
            ans[i + 1]++;
        }
    }
    for(int i = 1 ; i <= n ; i++){
        ans[i] += ans[i - 1];
    }
    /* for(int i = 1 ; i <= n ; i++){
        cout << i << " " << ans[i] << endl;
    } */
    for(int i = 0 ; i < q; i++){
        int l, r;
        cin >> l >> r;
        r = r - m + 1;
        if(r < l){
            cout << "0\n";
        }
        else
            cout << ans[r] - ans[l - 1] << endl;
    }
    return 0;
}