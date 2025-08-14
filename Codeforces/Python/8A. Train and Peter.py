# 8A. Train and Peter


def can_see(route, s1, s2):
    idx1 = route.find(s1)
    if idx1 == -1:
        return False
    idx2 = route.find(s2, idx1 + len(s1))
    return idx2 != -1

route = input().strip()
s1 = input().strip()
s2 = input().strip()

forward = can_see(route, s1, s2)
backward = can_see(route[::-1], s1, s2)

if forward and backward:
    print("both")
elif forward:
    print("forward")
elif backward:
    print("backward")
else:
    print("fantasy")

'''
route=input()
route_reverse=route[::-1]
s1=input()
s2=input()
forward=0
backward=0
for i in range(len(route)):
    if(route[i]==s1):
        for j in range(i,len(route)):
            if(route[j]==s2):
                forward=forward+1
        break
for i in route_reverse(len(route_reverse)):
    if(route_reverse[i]==s1):
        for j in range(i,len(route_reverse)):
            if(route_reverse[j]==s2):
                backward=backward+1
        break
if(forward==backward):
    print("both")
elif(forward>backward):
    print("forward")
elif(forward<backward):
    print("backward")
elif(forward==0 & backward==0):
    print("fantasy")
    '''
