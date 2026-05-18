import sys
input = sys.stdin.readline


def solve():
    n = int(input())

    b = list(map(int,input().split()))

    s = set()
    ok = False

    for x in b:
        if x in s:
            ok = True
            break
        s.add(x)

    if ok:
        print("YES")
    else:
        print("NO")

        
t = int(input())

for _ in range(t):
    solve()