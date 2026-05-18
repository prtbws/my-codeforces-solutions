import sys
input = sys.stdin.readline


def solve():

    n = int(input())
    s = input().strip()
    depth = 0
    ans = 0

    for x in s:

        if x == '(':
            depth+=1
        else:
            if depth>0:
                depth-=1
            else:
                ans+=1
    print(ans)

t = int(input())

for _ in range(t):
    solve()