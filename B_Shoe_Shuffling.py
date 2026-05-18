import sys
input = sys.stdin.readline


def solve():
    n = int(input())

    s = list(map(int, input().split()))

    p = [0] * n

    i = 0

    while i < n:

        j = i

        while j < n and s[j] == s[i]:
            j += 1

        if j - i == 1:
            print(-1)
            return

        for k in range(i, j - 1):
            p[k] = k + 2

        p[j - 1] = i + 1

        i = j

    print(*p)


t = int(input())

for _ in range(t):
    solve()