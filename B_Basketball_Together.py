import sys
input = sys.stdin.readline


def solve():
    n,d = map(int, input().split())
    p = list(map(int, input().split()))

    p.sort()

    win = 0

    r = n-1
    l = 0
    while l<=r :
        need = d//p[r] + 1

        if r-l+1 >= need:

            win += 1
            r-=1
            l += need-1
        
        else:
            break


    print(win)


solve()