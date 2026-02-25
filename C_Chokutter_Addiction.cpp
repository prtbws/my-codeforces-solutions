#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;      

    vector<int> a(n);       
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int ct = 0;
    int ot = 0;      

    for(int i = 0; i < n; i++){
        if(a[i] < ot) continue;   

        ct += a[i] - ot;          
        ot = a[i] + 100;           
    }

    if(ot < t){
        ct += t - ot;
    }

    cout << ct << endl;
    return 0;
}
