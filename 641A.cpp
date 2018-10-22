#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> powe(n + 1);
    for(int i = 0 ; i < n ; i++){
        cin >> powe[i + 1];
    }
    int cnt = 1;
    vector<bool> visi(n + 1);
    int i = 1;
    while(1){
        cout << i << endl;
        if(s[i - 1] == '<'){
            i -= powe[i];
        }
        else{
            i += powe[i];
        }
        if(i > n or i < 1){
            cout << "FINITE\n";
            return 0;
        }
        if(visi[i]){
            cout << "INFINITE\n";
            return 0;
        }
        else
            visi[i] = 1;
    }
    cout << "INFINITE\n";
    return 0;
}