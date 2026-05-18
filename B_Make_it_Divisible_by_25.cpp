#include <bits/stdc++.h>
using namespace std;

int calc(string s, char last){
    int n = s.size();
    int p1 = -1, p2 = -1;

    for(int i = n-1; i >= 0; i--){
        if(p1 == -1 && s[i] == last){
            p1 = i;
            continue;
        }

        if(p1 != -1){
            if(last == '0' && (s[i] == '0' || s[i] == '5')){
                p2 = i;
                break;
            }
            else if(last == '5' && (s[i] == '2' || s[i] == '7')){
                p2 = i;
                break;
            }
        }
    }

    if(p1 == -1 || p2 == -1) return 1e9;

    return (n - p1 - 1) + (p1 - p2 - 1);
}

void solve(){
    string s;
    cin >> s;

    int ans = min(calc(s, '0'), calc(s, '5'));
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
}