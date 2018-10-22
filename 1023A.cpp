#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int pos = -1;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '*'){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        if(s == t){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";

        }
    }
    else{
        /* if((n - 1) > m){
            cout << "NO\n";
            return 0;
        } */
        int j = 0;
        for(int i = 0 ; i < pos ; i++){
            if(s[i] == t[j]){
                j++;
            }
            else{
                cout << "NO\n";
                return 0;
            }
        }
        int fin = j - 1;
         j = m - 1;
        for(int i = n - 1 ; i > pos; i--){
            if(j <= fin){
                cout << "NO\n";
                return 0;
            }
            if(s[i] == t[j]){
                j--;
            }
            else{
                cout << "NO\n";
                return 0;
            }
        }
        cout << "YES\n";
    }
    return 0;
}