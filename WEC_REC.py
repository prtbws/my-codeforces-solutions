import sys
from collections import Counter

input = sys.stdin.readline


def solve():
    n,x,k = map(int, input().split())
    a = list(map(int,input().split()))

    freq = Counter(a)

    scores = sorted(freq.keys(), reverse=True)

    eli = 0

    for i in range(min(k,len(scores))):

        eli += freq[scores[i]]

    print(min(eli,x))



t = int(input())

for _ in range(t):
    solve()