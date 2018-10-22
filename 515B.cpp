#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int b, g;
    cin >> b;
    map<int, int> hb, hg;
    for(int i = 0 ; i < b ; i++){
        int id;
        cin >> id;
        hb[id]++;
    }
    for(int i = 0 ; i < g ; i++){
        int id;
        cin >> id;
        hg[id]++;
    }
    
    return 0;
}