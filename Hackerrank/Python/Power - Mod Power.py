# Power - Mod Power

a=int(input())
b=int(input())
m=int(input())
if ((1<=a<=10) & (1<=b<=10) & (2<=m<=1000)):
    humu=a**b
    mini=humu%m
    print(humu)
    print(mini)
else:
    print("error")
