# 1. Two Sum
arr_str = input()
arr_str = arr_str.strip("[]")
arr_str = arr_str.replace(",", " ")
arr = list(map(int, arr_str.split()))
tget = int(input())
size = len(arr)
for i in range (size):
    if((arr[i]+arr[i+1])==tget):
        print(f"[{i},{i+1}]")
        #print(i,(i+1))
        break
    else:
        print("There is no reletable")