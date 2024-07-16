class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        l=[]
        d={}
        for i in nums:
            if i not in d:
                d[i]=1
            else:
                l.append(i)
        return l

        