import sys
input = sys.stdin.readline


def solve():
    a = input().strip()
    b = input().strip()

    lcs = 0
    
    for i in range(len(a)):
        st = ""

        for j in range(i,len(a)):
            st+=a[j]

            if st in b:
                lcs= max(lcs,len(st))
    
    print(len(a)+len(b)-2*lcs)

t = int(input())

for _ in range(t):
    solve()