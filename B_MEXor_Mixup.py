import sys
input = sys.stdin.readline

def xor_upto(n):
    if n%4 == 0:
        return n
    elif n%4 == 1:
        return 1
    elif n%4 == 2:
        return n+1
    else:
        return 0

def solve():
    a,b = map(int, input().split())

    x = xor_upto(a-1)

    if x == b:
        print(a)

    elif x^b == a:
        print(a+2)
    else:
        print(a+1)


t = int(input())

for _ in range(t):
    solve()