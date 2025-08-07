# Python If-Else

humu = int(input())
if (0!=humu%2):
    print("Weird")
elif (0==humu%2 & 2<=humu<=5):
    print("Not Weird")
elif (0==humu%2 & 6<=humu<=20):
    print("Weird")
elif (0==humu%2 & 20<humu):
    print("Not Weird")
else:
    print("error")
