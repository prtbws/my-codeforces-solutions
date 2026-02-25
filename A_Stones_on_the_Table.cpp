#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string stone;

    cin >> n;
    cin >> stone;

    int rem=0;
    for(int i=0; i<n-1; i++){
        if(stone[i]==stone[i+1]) rem++;
    }
    
    cout << rem;

    return 0;
}