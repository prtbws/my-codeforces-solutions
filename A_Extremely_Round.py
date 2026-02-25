import sys
input = sys.stdin.readline

def solve():
    
    n = int(input())
    ten = 10
    count = 0
    rem = n%ten

    while n >= 10:
        
        ten *= 10
        count += 1
        rem = n%ten
        

    print(9+ rem*count)
    
    

t = int(input())
for _ in range(t):
    solve()