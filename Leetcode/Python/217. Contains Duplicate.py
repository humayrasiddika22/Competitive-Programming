# 217. Contains Duplicate

# Submitted code        runtime: 11 ms        memory use: 31.6 MB        
from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        my_set=set()
        size= len(nums)
        for i in range(size):
            if nums[i] in my_set:
                return True
            my_set.add(nums[i])
        return False
    
nums = list(map(int, input().split()))
obi=Solution()
print(obi.containsDuplicate(nums))


# This is the basic code        runtime:        memory use:
"""
nums=list(map(int, input().split()))
sum=0
for i in range(len(nums)):
    for j in range((i+1),len(nums)):
        if(nums[i]==nums[j]):
            sum=sum+1
            break
if(sum==0):
    print("false")
else:
    print("true")
"""