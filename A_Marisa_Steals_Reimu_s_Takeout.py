import sys
input = sys.stdin.readline


def solve():

    n = int(input())
    w = list(map(int, input().split()))

    c0 = w.count(0)
    c1 = w.count(1)
    c2 = w.count(2)

    ans=  c0
    pairs = min(c1,c2)

    ans += pairs
    c1 -= pairs
    c2 -= pairs

    ans += c1//3
    ans += c2//3

    print(ans)

t = int(input())

for _ in range(t):
    solve()