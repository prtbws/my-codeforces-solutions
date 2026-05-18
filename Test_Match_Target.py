import sys
input = sys.stdin.readline


def solve():

    x,y,z = map(int, input().split())

    lead  = x+z+1-y

    if lead<0:
        print(0)
    
    else:
        print(lead)




solve()