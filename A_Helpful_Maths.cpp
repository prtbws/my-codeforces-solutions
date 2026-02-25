#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >>s;

    s.erase(remove(s.begin(), s.end(), '+'), s.end());

    sort(s.begin(), s.end());

    string ans = "";

    for(int i=0; i<s.size(); i++){
        ans.push_back(s[i]);
        if(i != s.size()-1) ans.push_back('+');
    }
    cout << ans;
    
}