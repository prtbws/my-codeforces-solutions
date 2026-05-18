import sys
from collections import defaultdict

input = sys.stdin.readline


def solve():
    n,k = map(int, input().split())

    a = sorted(map(int , input().split()))

    mp = defaultdict(list)

    for x in a :

        mp[x%k].append(x)
    
    odd = 0

    for rem in mp :

        if len(mp[rem])%2 == 1:
            odd+=1
    
    if odd > 1:
        print(-1)
        return
    
    ans = 0

    for rem in mp:

        v=  mp[rem]
        m=  len(v)

        if m%2 == 0:

            for i in range(0, m, 2):

                ans += (v[i+1]-v[i]) // k
        
        else:

            pref = [0]*m

            for i in range(1,m-1, 2):
                pref[i+1] = pref[i-1] + (v[i]-v[i-1]) // k

            suf = [0]*m

            for i in range(m-2, 0, -2):

                suf[i-1] = suf[i+1] + (v[i+1]-v[i]) // k

            best = 10**18

            for i in range(0,m,2):

                best = min(best, pref[i]+suf[i])
            
            ans += best

    print(ans)   

t = int(input())

for _ in range(t):
    solve()