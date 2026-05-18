import sys
input = sys.stdin.readline

def fair(n):

    while True:
        d = list(map(int, str(n)))
        ok = True
        for x in d:
            if x!=0 and n%x != 0:
                ok = False
                break
    
        if ok:
            return n
        n+=1


def solve():
    n = input()
    n_int = int(n)
    f = fair(n_int)
    print(f)

t = int(input())

for _ in range(t):
    solve()