#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,t;

    cin >> t;
    for(int i=0; i<t; i++){

        cin >> n;
        int arr[n];
        int m=0, sum = 0;

        for(int j=0; j<n; j++){
            cin >> arr[j];
            m = max(m,arr[j]);
        }

        cout << n*m << endl;

    }

    return 0;
}