# A. Team
number = int(input())
count=0
for i in range (number):
    binary1, binary2, binary3 = map(int,input().split())
    if((binary1+binary2+binary3)>1):
        count=count+1
    else:
        count=count+0
print(count)