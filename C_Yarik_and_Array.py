import sys
input = sys.stdin.readline


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    maxi = a[0]
    sum = a[0]
    for i in range(1,len(a)):
        if abs(a[i]%2) == abs(a[i-1]%2):
            sum = a[i]
        else:
            sum = max(a[i], sum+a[i])
        maxi = max(maxi, sum)
    
    print(maxi)

t = int(input())

for _ in range(t):
    solve()