import sys
input = sys.stdin.readline


def solve():
    n,m = map(int, input().split())

    if (n+1)%3 != 0:
        print(-1)
        return
    
    a = [0]*(n+2)
    a[1] = 1

    for i in range(1,n):
        a[i+1] = (a[i]-a[i-1])%m

    print(*a[1:n+1])

t = int(input())

for _ in range(t):
    solve()