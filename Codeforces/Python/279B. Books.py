# 279B. Books

n, t = map(int,input().split())
a = list(map(int, input().split()))

sum = 0
j=0
max_books = 0

for i in range (n):
    sum=sum+a[i]
    
    while sum>t:
        sum=sum-a[j]
        j=j+1
        
    max_books = max(max_books, i-j+1)

print(max_books)