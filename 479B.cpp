#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int cnt = 0;
    vector<pair<int, int> > actions;
    while(k--){
        vector<int> :: iterator it1 = min_element(a.begin(), a.end()), it2 = max_element(a.begin(), a.end());
        int A = *it1, B = *it2;
        if(B - A <= 1){
            break;
        }
        (*it1)++;
        (*it2)--;
        cnt++;
        actions.push_back(make_pair(it1 - a.begin(), it2 - a.begin()));
    }
    int A = *min_element(a.begin(), a.end()), B = *max_element(a.begin(), a.end());
    cout << B - A << " " << cnt << endl;
    for(auto u: actions){
        cout << u.second + 1 << " " << u.first + 1 << endl;
    }
    return 0;
}