#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;
        string temp = x;

        while (temp.find(s) == string::npos) {
            temp += temp;
            count++;

            if (count > 10) {  
                count = -1;
                break;
            }
        }

        cout << count << '\n';
    }
    return 0;
}
