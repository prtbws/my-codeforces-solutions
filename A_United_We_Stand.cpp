#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long>a(n);

    vector<long long>b;
    vector<long long>c;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    long long mx = *max_element(a.begin(), a.end());
    for(int i=0; i<n; i++){

        if(a[i]!=mx) b.push_back(a[i]);
        else c.push_back(a[i]);
    }

    if(b.size()==0) cout << -1 << endl;
    else{

        cout << b.size() << " " <<  c.size() << endl;
        for(auto i : b){
            cout << i << " ";
        }
        cout << endl;
        for(auto j : c){
            cout << j << " ";
        }
        cout << endl;
    }
    

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