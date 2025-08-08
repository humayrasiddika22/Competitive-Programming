# Formatted Numbers
user_input = input()
length = len(user_input)
if(length<=3):
    print(user_input)
elif(length==4):
    print(user_input[0]+","+user_input[1]+user_input[2]+user_input[3])
elif(length==5):
    print(user_input[0]+user_input[1]+",",user_input[2]+user_input[3]+user_input[4])
elif(length==6):
    print(user_input[0]+user_input[1]+user_input[2]+","+user_input[3]+user_input[4]+user_input[5])
elif(length==7):
    print(user_input[0]+","+user_input[1]+user_input[2]+user_input[3]+","+user_input[4]+user_input[5]+user_input[6])
elif(length==8):
    print(user_input[0]+user_input[1]+","+user_input[2]+user_input[3]+user_input[4]+","+user_input[5]+user_input[6]+user_input[7])
elif(length==9):
    print(user_input[0]+user_input[1]+user_input[2]+","+user_input[3]+user_input[4]+user_input[5]+","+user_input[6]+user_input[7]+user_input[8])
