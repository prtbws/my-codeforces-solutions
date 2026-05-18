#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    
    int n;
    cin >> n;

    vector<int>a(n);
    vector<int> two, three, other, six;

    for(int i =0; i<n; i++){
        cin >> a[i];

        if(a[i]%6 == 0) six.push_back(a[i]);
        else if(a[i] % 2 == 0 && a[i] % 3 != 0) two.push_back(a[i]);
        else if(a[i] % 2 != 0 && a[i] % 3 == 0) three.push_back(a[i]);
        else other.push_back(a[i]);
    }
    for(auto i : six) cout << i << " ";
    for(auto i : two) cout << i << " ";
    for(auto i : other) cout << i << " ";
    for(auto i : three) cout << i << " ";
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