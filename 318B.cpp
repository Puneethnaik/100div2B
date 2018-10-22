#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<int> heavy, metal;
    for(int i = 0 ; i <= (int)s.length() - 4; i++){
        // cout << i << endl;
        if(!s.substr(i, 5).compare("heavy")){
            heavy.push_back(i);
            // cout << "heavy found at position " << i + 1 << endl;
        }
        if(!s.substr(i, 5).compare("metal")){
            metal.push_back(i);
            // cout << "metal found at position " << i + 1 << endl;
        }
    }
    long long ans = 0;
    for(int i = 0 ; i < heavy.size(); i++){
        vector<int> :: iterator it = lower_bound(metal.begin(), metal.end(), heavy[i]);
        ans += (long long)(metal.end() - it);
        // cout << it - metal.begin() << " " << cnt << endl;
    }
    cout << ans << endl;
    return 0;
}