#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    int max = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        
        if(a > max){
            max = a;
            count = 1;
        }
        else if(a == max){
            count++;
        }
    }
    cout << count << endl;
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