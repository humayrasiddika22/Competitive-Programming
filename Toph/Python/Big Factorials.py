# Big Factorials

n = int(input())
mul = 1
for i in range(n):
    mul=mul*(n-i)
lenth=len(str(mul))
if(lenth>4):
    num=str(mul)
    mul2=num[-4:]
    print(mul2)
else:
    print(mul)