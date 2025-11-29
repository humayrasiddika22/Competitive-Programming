# 49. Group Anagrams

# Submitted code        runtime: 8 ms        memory use: 20.62 MB
from collections import defaultdict
from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)

        for word in strs:
            key = "".join(sorted(word))
            groups[key].append(word)

        result = list(groups.values())
        return result

strs=list(input().split())
obj=Solution()
print(obj.groupAnagrams(strs))


"""
from collections import defaultdict

words = input().split()

groups = defaultdict(list)

for word in words:
    key = "".join(sorted(word))
    groups[key].append(word)

result = list(groups.values())
print(result)
"""
