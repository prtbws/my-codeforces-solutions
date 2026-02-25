#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    string x;
    cin >> x;

    int sum =0;
    for(char c : x){
        sum+= c-'0';
    }

    if(sum < 10){
        cout << 0 << endl;
        return;
    }

    vector<int>num;

    num.push_back((x[0]-'0')-1);
    for(int i=1; i<x.length(); i++){
        num.push_back(x[i]-'0');
    }

    sort(num.rbegin(), num.rend());

    int moves = 0;
    for(int n : num){
        sum -= n;
        moves++;

        if(sum < 10){
            break;
        }
    }
    cout << moves << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}