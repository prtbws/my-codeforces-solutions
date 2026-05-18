import sys
input = sys.stdin.readline


def solve():
    n = int(input())
    s=  input().strip()
    ans = 0

    se = set()
    for i in range(n):
        se.add(s[i])
        ans += len(se)

    print(ans)


t = int(input())

for _ in range(t):
    solve()