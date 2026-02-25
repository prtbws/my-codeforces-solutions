n,k = map(int, input().split())

a = list(map(int, input().split()))

kth = a[k-1]

count=0

for i in range(n):
    
    if a[i]>0 and a[i]>=kth : 
        count+=1

print(count)
        
