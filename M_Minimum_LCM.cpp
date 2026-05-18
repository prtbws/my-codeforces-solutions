#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    if(n%2 == 0) cout << n/2 << " " << n/2 << endl;

    else{

        int d = -1;
        for(int i = 3; i*i <= n; i+= 2){
            if(n%i == 0){
                d = i;
                break;
            }
        }
        if(d == -1){
            cout << 1 << " " << n-1 << endl;
        }
        else{
            cout << n/d << " " << n-n/d << endl;
        }
    }
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