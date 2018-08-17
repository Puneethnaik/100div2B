#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    multiset<int> M;
    for(int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        M.insert(val);
    }
    while(k--){
        int ele = *M.begin();
        ele *= -1;
        M.erase(M.begin());
        M.insert(ele);
    }
    int sum = 0;
    for(auto v : M){
        sum += v;
    }
    cout << sum << endl;

    return 0;
}