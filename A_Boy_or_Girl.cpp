#include <bits/stdc++.h>
using namespace std;

int main() {

    string a;
    cin >> a;

    map<int, int>mapp;

    for(int i=0 ; i<a.size(); i++){
        mapp[a[i]]++;
    }

    int sz = mapp.size();

    if(sz%2!=0) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

}