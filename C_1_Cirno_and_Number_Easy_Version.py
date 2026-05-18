import sys
input = sys.stdin.readline

def solve():
    a, n = map(int, input().split())
    x, y = map(int, input().split())

    s = str(a)
    l = len(s)
    c = set()

    if l > 1:
        c.add(int(str(y)*(l-1)))

    f = x if x > 0 else y
    c.add(int(str(f) +str(x) *l))

    p = ""

    for i in range(l):
        cur = int(s[i])
        for d in [x, y]:
            if i == 0 and d == 0 and l > 1:
                continue
            if d < cur:
                num = p + str(d) + str(y) * (l-1-i)
                c.add(int(num))
            elif d > cur:
                num = p + str(d) + str(x) * (l-1-i)
                c.add(int(num))

        if cur in [x, y] and not (i == 0 and cur == 0 and l > 1):
            p += str(cur)
        else:
            break

    else:
        if p:
            c.add(int(p))

    ans = float('inf')

    for v in c:
        ans = min(ans, abs(a-v))
    print(ans)

t = int(input())

for _ in range(t):
    solve()