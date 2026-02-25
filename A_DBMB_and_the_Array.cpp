#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--){
        int n, s, x;
        cin >> n >> s >> x;

        vector<int>a(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            
            sum+=a[i];
        }

        if(sum>s){
            cout << "NO" << endl;
        }
        
        else if(sum==s){
            cout << "YES" << endl;
        }

        else{
            while(sum<s){

                sum+=x;

                if(sum==s){
                    cout << "YES" << endl;
                }
                else if(sum>s){
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}