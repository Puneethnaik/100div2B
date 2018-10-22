#include <bits/stdc++.h>
using namespace std;
set<int> s1, s2;
vector<int> perm(500), d(500);
int n;
vector<bool> visi(500);
void dfs(int u){
    if(visi[u])return;
    // cout << u << " ";
    visi[u] = 1;
    s1.insert(u);
    s2.insert(perm[u]);
    for(int v = 1 ; v <= n ; v++){
        if(fabs(u - v) == d[u] || fabs(u - v) == d[v]){
            dfs(v);
        }
    }
}
int main(){
    // int n;
    cin >> n;
    // vector<int> perm(n + 1), d(n + 1);
    for(int i = 1 ; i <= n ; i++){
        cin >> perm[i];
    }
    for(int i = 1 ; i <= n ; i++){
        cin >> d[i];
    }
    bool flg = true;
    for(int i = 1 ; i <= n ; i++){
        s1.clear();
        s2.clear();
        if(!visi[i]){
            dfs(i);
        }
        /* for(int u : s1){
            cout << u << " ";
        }
        cout << endl;
        for(int u : s2){
            cout << u << " ";
        }
        cout << "end" << endl; */
        if(s1 != s2)flg = false;
    }
    if(flg){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}