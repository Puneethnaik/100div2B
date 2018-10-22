#include <bits/stdc++.h>
using namespace std;
int en(char ch){
    if(isalpha(ch)){
        return (ch - 'A') + 10;
    }
    else{
        return (ch - '0');
    }
}
bool f(string n, int base, int pos){
    reverse(n.begin(), n.end());
    int val = 0;
    for(int i = 0 ; i < n.length(); i++){
        val = val * base + en(n[i]);
    }
    if(pos == 1){
        if(val <= 23 and val >= 1)return 1;
        return 0;
    }
    else{
        if(val <= 59 and val >= 0)return 1;
        return 0;
    }
}
int minbase(string a, string b){
    int base = 0;
    for(char ch : a){
        base = max(base, en(ch));
    }
    for(char ch : a){
        base = max(base, en(ch));
    }
    return base;
}
int main(){
    string s;
    cin >> s;
    int pos1;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == ':'){
            pos1 = i;
            break;
        }
    }
    string a = s.substr(0, pos1);
    string b = s.substr(pos1 + 1);
    // cout << a << " " << b << endl;
    if(f(a, 100, 1) and f(b, 100, 2)){
        cout << "-1\n";
    }

    for(int i = minbase(a, b) ; i <= 60; i++){
        if(f(a, i, 1) and f(b, i, 2)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}