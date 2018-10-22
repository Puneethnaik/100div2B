#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> M;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        M[a[i]]++;
    }
    ll ans = 0LL;
    for(auto it : M){
        if(it.first > 0){
            ans += (ll)it.second * (ll)(M[-it.first]);
        }
        else if(it.first == 0){
            ans += ((ll)(it.second) * (ll)(it.second - 1)) / 2LL;
        }
        else{

        }
    }
    cout << ans << endl;
    return 0;
}