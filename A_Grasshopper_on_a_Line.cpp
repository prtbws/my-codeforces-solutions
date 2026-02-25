#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){

        int x, k;
        cin >> x >> k;

        if(x%k != 0){
            cout << 1 << endl << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << 1 << " " <<  x-1 << endl;
        }
    }


    return 0;
}