import sys
input = sys.stdin.readline


def solve():
    n = int(input())
    a = list(map(int, input().split()))
    arr = []

    for i in range(n):
        arr.append((a[i], i + 1))

    arr.sort(reverse=True)

    x = 1
    cnt = 0
    total_time = 0

    ans = [0]*(n+1)
    total_time = 0
    dis = 1

    for i in range(n):
        freq, idx = arr[i]

        if i % 2 == 0:
            ans[idx] = dis
        else:
            ans[idx] = -dis
        
        total_time += 2*freq*dis

        if i%2 == 1:
            dis+=1

    print(total_time)
    print(*ans)


t = int(input())

for _ in range(t):
    solve()