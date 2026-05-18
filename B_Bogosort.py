import sys
input = sys.stdin.readline


def solve():
    
    n = int(input())
    a = list(map(int, input().split()))
    
    a.sort(reverse=True)
    print(*a)

t = int(input())

for _ in range(t):
    solve()