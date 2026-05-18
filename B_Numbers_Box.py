import sys
input = sys.stdin.readline


def solve():

    n,m = map(int,input().split())

    mat = []

    smallest = 10**9
    total = 0
    count_neg = 0

    for _ in range(n):
        row = list(map(int, input().split()))
        mat.append(row)

        for x in row:
            smallest = min(smallest, abs(x))
            total += abs(x)
            if x < 0:
                count_neg += 1



    if smallest == 0:
        print(total)

    elif count_neg%2 == 0:
        print(total)

    else :
        print(total - 2*smallest)

    
t = int(input())

for _ in range(t):
    solve()