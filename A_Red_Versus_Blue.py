import sys
input = sys.stdin.readline


def solve():
    n,r,b = map(int, input().split())

    s = []

    length_red = r//(b+1)
    extra_red = r%(b+1)

    for i in range(b+1):

        s.append('R'*length_red)

        if extra_red >0:
            s.append('R')
            extra_red-=1
        
        if i < b:

            s.append('B')

    print(''.join(s))

t = int(input())

for _ in range(t):
    solve()