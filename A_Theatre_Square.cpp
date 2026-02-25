#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n,m,a;
    long long n1,n2;

    cin >> n >> m >> a;

    if(m%a==0) n1 = m/a;
    else n1 = m/a + 1;

    if(n%a==0) n2 = n/a;
    else n2 = n/a + 1;

    cout << n1*n2 << endl;

    return 0;
}