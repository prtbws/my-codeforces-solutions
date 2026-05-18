import sys
input = sys.stdin.readline

def is_prime(x):
    if x < 2:
        return False
    
    for i in range(2,int(x**0.5)+1):
        if x%i == 0:
            return False
    return True
    
def next_prime(x):

    while not is_prime(x):
        x+=1

    return x

def solve():
    d = int(input())

    p = next_prime(1+d)
    q = next_prime(p+d)

    print(p*q)

t = int(input())

for _ in range(t):
    solve()