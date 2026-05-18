import sys
input = sys.stdin.readline


def solve():

    n = int(input())
    a = list(map(int, input().split()))

    ans = 0

    for k in range(1, n+1):
        if n%k == 0:
            mx = float('-inf')
            mi = float('inf')

            for i in range(0,n,k):

                block_sum = sum(a[i:i+k])

                mx = max(block_sum, mx)
                mi = min(block_sum, mi)
            
            ans = max(ans, mx-mi)
    print(ans)   


t = int(input())

for _ in range(t):
    solve()