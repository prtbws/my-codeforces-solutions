#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> p(n);

        for(int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int l = -1;
        for(int i = 0; i + 1 < n; i++) {
            if(p[i] < p[i + 1]) {
                l = i;
                break;
            }
        }

        if(l != -1) {
            int mx = p[l];
            int r = l;
            for(int i = l; i < n; i++) {
                if(p[i] >= mx) {
                    mx = p[i];
                    r = i;
                }
            }
            reverse(p.begin() + l, p.begin() + r + 1);
        }

        
        for(int x : p) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
