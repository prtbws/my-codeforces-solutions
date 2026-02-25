#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        if(k % 2 == 0){
            cout << (n % 2 == 0 ? "YES\n" : "NO\n");
        }
        else{
            cout << (n >= k ? "YES\n" : "NO\n");
        }
    }
}
