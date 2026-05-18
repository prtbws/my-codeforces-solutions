import sys
input = sys.stdin.readline


def solve():

    n,k,b,s = map(int, input().split())

    mn = k*b
    mx = k*b + (k-1)*n

    if s < mn or s > mx:
        print(-1)
        return
    
    ans = [0]*n

    ans[0] = k*b
    s -= ans[0]

    for i in range(n):
        add = min(s, k-1)
        ans[i] += add
        s-=add
    
    print(*ans)
     


t = int(input())

for _ in range(t):
    solve()