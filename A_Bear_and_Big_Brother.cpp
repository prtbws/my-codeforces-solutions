#include <bits/stdc++.h>
using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    int wa = a, wb = b, year=0;

    while(wb>=wa){
        wa *= 3;
        wb*= 2;
        year++;
    }

    cout << year << endl;

    return 0;
}