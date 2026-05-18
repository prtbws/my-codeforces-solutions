#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n;
    cin >>n ;

    vector<int>a(n);

    int x = 0;
    set<int>s;

    for(int i=0; i<n; i++){
        cin >> a[i];

        if(x>a[i]){
            x = 1;
        }
        else if(x<a[i]){
            x = -1;
        }
        else x = 0;
        s.insert(x);
    }

    for(auto &t : s){
        cout << t << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}