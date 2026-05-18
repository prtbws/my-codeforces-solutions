import sys
input = sys.stdin.readline


def solve():
    n,k = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    pre = [0]*n
    pre[0] = a[0]
    ans = 0
    max_b = 0
    for i in range(n):

        if i>0:
            pre[i] = pre[i-1]+a[i]
        max_b = max(max_b, b[i])
        if k<=i:
            break
        ans = max(ans, pre[i] + max_b*(k-i-1))

    print(ans)

t = int(input())

for _ in range(t):
    solve()