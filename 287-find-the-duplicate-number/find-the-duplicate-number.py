class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        d={}
        x=0
        for i in nums:
            if i not in d:
                d[i]=1
            else:
                x=i
        return x
        