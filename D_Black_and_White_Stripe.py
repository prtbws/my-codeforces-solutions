import sys
input = sys.stdin.readline


def solve():
    n,k = map(int,input().split())
    s = input()

    pre = [0]*n
    if s[0]=='W':
        pre[0] = 1

    for i in range(1,n):
        pre[i] = pre[i-1]
        if s[i]=='W':
            pre[i] += 1
    
    i,j = 0, k-1
    ans = 10**9
    while j<n:

        if i>0:
            ans = min(ans, pre[j]-pre[i-1])

        else:
            ans = min(ans,pre[j])
        i+=1
        j+=1
    
    print(ans)


t = int(input())

for _ in range(t):
    solve()