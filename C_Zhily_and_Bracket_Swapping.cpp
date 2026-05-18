#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){

    int n;
    cin >> n;

    string a,b;
    cin >> a;
    cin >> b;

    int cnta = 0, cntb = 0;

    for(int i=0; i<n; i++){

        if(a[i] == ')' && b[i] == ')'){
            cnta--;
            cntb--;
        }
        else if(a[i] == '(' && b[i] == '('){
            cnta++;
            cntb++;
        }

        else{
            if(cnta < cntb){
                cnta++;
                cntb--;
            }
            else{
                cnta--;
                cntb++;
            }
        }
        if(cnta < 0 || cntb < 0){
            cout << "NO" << endl;
            return;
        }
    }
    
    if(cnta != 0 || cntb != 0){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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