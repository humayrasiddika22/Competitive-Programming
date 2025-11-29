# Fibonacci Between

l,r=map(int,input().split())
a=0
b=1
if l==0:
    print(a)
while b<=r:
    result=a+b
    a=b
    b=result
    if l <= result <= r:
        print(result)