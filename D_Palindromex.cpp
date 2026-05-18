#include <bits/stdc++.h>
using namespace std;

bool isPal(vector<int>& v, int l, int r) {
    while(l<r){
        if(v[l]!=v[r])return false;
        l++;
        r--;
    }
    return true;
}

int getMex(vector<int>& v,int l,int r){
    unordered_set<int> st;
    for (int i=l;i<=r;i++)st.insert(v[i]);
    
    int mex=0;
    while(st.count(mex))mex++;
    return mex;
}

int main(){
    	// your code goes here
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n);
        for(int i=0;i<2*n;i++)cin >> a[i];

        int ans=0;

        for(int l=0;l<2*n;l++){
            for(int r=l;r<2*n;r++){
                if(isPal(a,l,r)){
                    ans = max(ans,getMex(a,l,r));
                }
            }
        }
        cout<<ans<<endl;
    }
}