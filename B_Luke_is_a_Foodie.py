import sys
input = sys.stdin.readline


def solve():

    n, x = map(int, input().split())

    a = list(map(int, input().split()))

    change = 0

    mn = a[0]
    mx = a[0]

    for i in range(1, n):

        mn = min(mn, a[i])
        mx = max(mx, a[i])

        if mx - mn > 2 * x:

            change += 1

            mn = a[i]
            mx = a[i]

    print(change)


t = int(input())

for _ in range(t):
    solve()