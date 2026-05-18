import sys
input = sys.stdin.readline


def solve():
    w,h = map(int, input().split())

    ans = 0
    for i in range(2):
        x = list(map(int, input().split()))
        ans=  max(ans, (x[-1]-x[1])*h)
    for i in range(2):
        y = list(map(int, input().split()))
        ans=  max(ans, (y[-1]-y[1])*w)
    
    print(ans)


t = int(input())

for _ in range(t):
    solve() 