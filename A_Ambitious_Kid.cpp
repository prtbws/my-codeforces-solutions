#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long s = INT_MAX;
    vector<long long>a(n);

    for(int i=0; i<n ;i++){

        cin >> a[i];
        s = min(s, abs(a[i]));
    }
    cout << abs(s) << endl;

    return 0;
}