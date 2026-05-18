import sys
input = sys.stdin.readline


def solve():
    a,b = map(int,input().split())

    ans = 10**9

    for add in range(30):

        new_b = b+add

        if new_b == 1:
            continue

        x = a
        op = add

        while x > 0:
            x//=new_b
            op += 1
        
        ans = min(ans, op)
    
    print(ans)


t = int(input())

for _ in range(t):
    solve()