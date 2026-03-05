#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n,k,x;
    cin >> n >> k >> x;

    if(x != 1) {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=0; i<n; i++) cout << 1 << " ";

    }
    else{

        if(k>1){
            if(n%2==0){
                cout << "YES" << endl;
                cout << n/2 << endl;
                for( int i=0; i<n/2; i++) cout << 2 << " ";
            }
            else{
                if(k==2) cout << "NO";

                else{
                
                    cout << "YES" << endl;
                    cout << n/2 << endl;
                    for( int i=0; i<n/2-1; i++) cout << 2 << " ";
                    cout << 3 << " ";
                }
            }
            
        }
        else cout << "NO";
    }
    cout << endl;
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