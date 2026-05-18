import sys
input = sys.stdin.readline


def solve():
    x,y,k = map(int, input().split())
    trades = (k+k*y-1 + x -2)//(x-1)
    print(trades+k)

t = int(input())

for _ in range(t):
    solve()