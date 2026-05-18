import sys
from collections import *
from heapq import *
from bisect import *
from math import *

input = sys.stdin.readline

def solve():

    n,c = input().split()

    n = int(n)

    s = input().strip()

    if c == 'g':

        print(0)
        return

    t = s+s

    green = []

    for i in range(2*n):
        if t[i] == 'g':

            green.append(i)

    ans = 0
    ptr = 0

    for i in range(n):
        if t[i] == c:
            while green[ptr] <i:
                ptr+=1
            ans = max(ans, green[ptr]-i)

    print(ans)




t = int(input())

for _ in range(t):
    solve()

