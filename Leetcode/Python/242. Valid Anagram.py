# 242. Valid Anagram

# Submitted code        runtime: 19 ms        memory use: 18.35 MB        
from typing import List
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(("".join(sorted(s)))==("".join(sorted(t)))):
            return True
        else:
            return False

s=input()
t=input()
obj=Solution()
print(obj.isAnagram(s,t))


# Submitted code        runtime: 53 ms        memory use: 18.39 MB        
"""
from typing import List
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        result1 = "".join(sorted(s))
        result2 = "".join(sorted(t))
        if(result1==result2):
            return True
        else:
            return False

s=input()
t=input()
obj=Solution()
print(obj.isAnagram(s,t))
"""


"""
s=input()
t=input()

result1 = "".join(sorted(s))
result2 = "".join(sorted(t))

if(result1==result2):
    print("true")
else:
    print("false")
"""