import sys
input = sys.stdin.readline


def solve():

    n,x1,x2,k = map(int,input().split())

    d = min(abs(x1-x2), n-abs(x1-x2))

    if n<= 3:
        print(d)
    else :
        print(d+k)

t = int(input())

for _ in range(t):
    solve()