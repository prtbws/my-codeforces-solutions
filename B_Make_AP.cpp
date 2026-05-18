#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, b, c;
    cin >> a >> b >> c;

    if(2*b < a+c){
        if((a+c)%(2*b) == 0){
            cout << "YES" << endl;
            return;
        }  
    }
    else{
        if((2*b-c)%a == 0 || (2*b - a) % c == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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