#include <bits/stdc++.h>
#include <numeric>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int>p(n);

    for(int i = 0; i<n; i++) cin >> p[i];

    int k = p[0] - 1;
    for(int i=0; i <n; i++){

        k = std::gcd(k, p[i] - i-1);

    }
    cout << k << endl;
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