#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int vec[n + 1][m + 1];
    int fin = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            char ch;
            cin >> ch;
            if(ch == '*'){
                vec[i + 1][j + 1] = 1;
                fin++;
            }
            else{
                vec[i + 1][j + 1] = 0;
            }
        }
    }
    vector<int> R(n), C(m);
    for(int i = 0 ; i < n ; i++){
        int tmp = 0;
        for(int j = 0 ; j < m ; j++){
            {
                tmp += (vec[i + 1][j + 1]);
            }
        }
        R[i] = tmp;
    }
    for(int j = 0 ; j < m ; j++){
        int tmp = 0;
        for(int i = 0 ; i < n ; i++){
            {
                tmp += (vec[i + 1][j + 1]);
            }
        }
        C[j] = tmp;
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            int cnt = R[i] + C[j];
            if(vec[i + 1][j + 1] == 1){
                cnt--;
            }
            // cout << "(" << i << ", " << j << ") -> " << cnt << endl;
            if(cnt == fin){
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}