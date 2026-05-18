#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;

    cin >>n ;

    string s;
    cin >> s;

    int len = 0;
    int ans = 0;
    for(int i=0; i<n; i++){

        if(len%2 == 0){
            if(s[i] == 'u' || s[i]== 'o'){
                len++;
                    
            }
            else{
                len = 0;
            }
        }
        else{
            if(s[i] == 'w' ){
                len++;
                if(len%2 == 1) ans = max(ans, len);
            }
            else{
                if(s[i] == 'u' || s[i] == 'o'){
                    len = 1;
                } else {
                    len = 0;
                }
            }
        }
        if(len%2 == 1) ans = max(ans, len);
    }
    cout << ans << endl;
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