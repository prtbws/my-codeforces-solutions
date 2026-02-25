#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m, h;

    cin >> t;

    while(t--){

        cin >> n >> m >> h;
        
        vector<int>a(n);
        vector<int>a2(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            a2[i]=a[i];
        }

        for(int i=0; i<m; i++){
            int b,c;
            cin >> b >> c;
            b--;
            
            a2[b]+=c;
            if(a2[b]>h) a2=a;    
        }

        for(int i=0; i<n; i++){
            cout << a2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
