# 1. Two Sum

# Submitted code        runtime: 0 ms        memory use: 18.7 MB
from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_set={}
        size=len(nums)
        for i in range(size):
            div=target-nums[i]
            if div in my_set:
                return [my_set[div],i]
            my_set[nums[i]] = i

        
nums = list(map(int, input().split()))
target = int(input())
obi=Solution()
print(obi.twoSum(nums,target))        


# This is the basic code        runtime:        memory use:
'''
nums = list(map(int, input().split()))
target = int(input())
size = len(nums)
for i in range(size):
    for j in range(i+1,size):
        if((nums[i]+nums[j])==target):
            print(f"[{i},{j}]")
        break
'''