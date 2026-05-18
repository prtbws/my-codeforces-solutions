import sys
input = sys.stdin.readline


def solve():
    x = int(input())

    if x<=20:
        print(x*10)
    else:
        cost = 200+(((x -20)//2)*5)
        print(cost)

t = int(input())

for _ in range(t):
    solve()