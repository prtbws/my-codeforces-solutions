#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;
    cin >> a;
    cin >> b;

    for(char &c : a){
        c = tolower(c);
    }

    for(char &c : b){
        c = tolower(c);
    }

    if(a>b) cout << 1;
    else if(a<b) cout << -1;
    else cout << 0;

    return 0;
}