import sys
input = sys.stdin.readline


def solve():
    n = int(input())
    a = list(map(int,input().split()))

    arr = []
    for i in range(n):
        arr.append((a[i],i))

    arr.sort()

    pre = [0]*n
    pre[0] = arr[0][0]

    for i in range(1,n):
        pre[i] = pre[i-1]+arr[i][0]

    ans = [0]*n

    reach = [0]*n
    reach[n-1] = n-1

    for i in range(n-2, -1, -1):
        if pre[i] >= arr[i+1][0]:
            reach[i] = reach[i+1]
        else:
            reach[i] = i
    
    for i in range(n):
        val, idx = arr[i]
        ans[idx] = reach[i]
    
    print(*ans)


t = int(input())

for _ in range(t):
    solve()