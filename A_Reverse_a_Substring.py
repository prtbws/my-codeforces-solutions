import sys
input = sys.stdin.readline


def solve():

    n = int(input())
    s = input().strip()

    for i in range(n-1):
        
        if s[i]>s[i+1]:
            print("YES")
            print(i+1,i+2)
            return
        
    print("NO")

solve()