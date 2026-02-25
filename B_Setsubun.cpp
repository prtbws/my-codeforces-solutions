#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;

    int s = n;
    int y = 0;
    while(s<k){
        
        n++;
        s+=n;
        y++;
    }

    cout << y << endl;

    return 0;
}