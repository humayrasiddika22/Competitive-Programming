# List Comprehensions
a=int(input())
b=int(input())
c=int(input())
result=[]
num=int(input())
for i in range(a+1):
    for j in range(b+1):
        for k in range(c+1):
            if((i+j+k)!=num):
                result.append([i, j, k])
print(result)