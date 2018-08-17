#include <bits/stdc++.h>
using namespace std;
vector<string> split(string s, char ch){
    string fin = "";
    vector<string> res;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == ch){
            res.push_back(fin);
            fin = "";
        }
        else{
            fin += s[i];
        }
    }
    res.push_back(fin);
    return res;
}
int main(){
    string s;
    cin >> s;
    vector<string> comp = split(s, '2');
    // for(string v : comp){
    //     cout << v << " ";
    // }
    string first = "";
    first += comp[0];
    for(int i = 1 ; i < comp.size(); i++){
        for(char ch : comp[i]){
            if(ch == '1'){
                first += ch;
            }
        }
    }
    sort(first.begin(), first.end());
    string ans = first;
    for(int i = 1 ; i < comp.size(); i++){
        string tem = "";
        for(char ch : comp[i]){
            if(ch != '1'){
                tem += ch;
            }
        }
        ans += '2' + tem;
    }

    cout << ans << endl;
    return 0;
}