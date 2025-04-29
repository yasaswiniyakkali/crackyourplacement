class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n=len(nums)
        

        d={}
        for i in nums:
            if i not in d:
                d[i]=1
            else:
                d[i]=d[i]+1
        for j in range(1,n+1):
            if j not in d:
                return j
        return n+1

        