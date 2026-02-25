#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<int>peo(t);

    for (int i=0; i<peo.size(); i++){
        cin >> peo[i];
    }

    for(int i=0; i<peo.size(); i++){

        
        
        if(peo[i]%2==0){
            if(peo[i]==2) cout << 2 << endl;
            else cout << 0 << endl;

        }
        else if(peo[i]%4 == 3) cout << 3 << endl;
        else if(peo[i]%4 == 1) cout << 1 << endl;
    }

    return 0;
}