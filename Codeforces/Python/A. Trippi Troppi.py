# A. Trippi Troppi
num =int(input())
for i in range (num):
    strn=input()
    for word in strn.split(' '):
        print(word[0], end="")
    print("")