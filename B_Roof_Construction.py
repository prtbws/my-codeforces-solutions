import sys
input = sys.stdin.readline


def solve():

    n = int(input())

    k = 1
    while k*2 < n:
        k*=2

    ans = []

    for i in range(k-1, -1, -1):
        ans.append(i)
    for i in range(k, n):
        ans.append(i)

    print(*ans)    


t = int(input())

for _ in range(t):
    solve()