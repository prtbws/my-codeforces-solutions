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

        string s;
        cin >> s;

        int count =0;

        int i=0, j=n-1;
        while(i<j){

            if(s[i] != s[j]){
                count++;
                i++;
                j--;
            }
            else{
                break;
            }
        }
        cout << n-2*count << endl;
    }

    return 0;
}