#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> pre(n + 1), pos(n + 1);
    for(int i = 1 ; i <= n ; i++){
        pre[i] = pre[i - 1] + (s[i] == '(');
    }

    return 0;
}