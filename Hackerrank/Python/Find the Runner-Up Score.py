# Find the Runner-Up Score!

n=int(input())
a = list(map(int, input().split()))
a.sort(reverse=True)
maxi=max(a)
for i in range(n):
    j=i+1
    for j in range(n):
        if(a[i]!=a[j]):
            print(a[j])
            break
    break