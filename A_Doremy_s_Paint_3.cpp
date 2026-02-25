#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        
        vector<long long>a(n);
        int count = 0;
        map<long long, long long>freq;

        for(int i=0; i<n; i++){
            cin >> a[i];

            freq[a[i]]++;
        }

        if(freq.size() > 2) cout << "No" << endl;
        else{

            long long f1 = freq.begin()->second;
            long long f2 = freq.rbegin()->second;

            if(f1 == f2) cout << "Yes" << endl;
            else if(n%2 == 1 && abs(f1-f2) ==1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

    }

    return 0;
}