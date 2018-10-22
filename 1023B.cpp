#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, k;
    cin >> n >> k;
    ll lo = k / 2 + 1, hi = k - 1;
    while(lo <= hi){
        ll mid = (lo + hi) / 2LL;
        // cout << mid << endl;
        if(mid > n){
            hi = mid - 1;
        }
        else if(mid <= n){
            lo = mid + 1;
        }
    }
    // cout << hi << endl;
    if(hi < k / 2 + 1){
        cout << "0\n";
    }
    else {
        cout << hi - (ll)(k / 2 + 1) + 1 << endl;
    }
    return 0;
}