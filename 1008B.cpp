#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > arr;
    for(int i = 0 ; i < n ; i++){
        int h, w;
        cin >> h >> w;
        if(h > w){
            swap(h, w);
        }
        arr.push_back({h, w});
    }
    reverse(arr.begin(), arr.end());
    int ans = arr[0].first;
    for(int i = 1 ; i < n ; i++){
        if(arr[i].first < ans and arr[i].second < ans){
            cout << "NO\n";
            return 0;
        }
        else{
            if(arr[i].first >= ans){
                ans = arr[i].first;
            }
            else{
                ans = arr[i].second;
            }
        }
    }
    cout << "YES\n";
    return 0;
}