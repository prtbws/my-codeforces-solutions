#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector <ll>a(n);

    for(int i=0; i<a.size(); i++){

        cin >> a[i];
    }

    for(int i=0; i<a.size(); i++){

        int l = i+1;
        int r = a.size()-1;

        while(l<r){

            if(a[i]+a[l] !=a [r]){
                cout << i+1 << " "<< l+1 << " " << r+1<< endl;
                return;
            }
            else{
                l++;
                r--;
            }
        }
    }
    cout << -1 << endl;
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