class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        n=len(s)
        
        ans=0
        for i in range(n-2):
            d={}
            c=0
            for j in range(3):
                if s[i+j] not in d:
                    d[s[i+j]]=1
                    c=c+1
                else:
                    d[s[i+j]]=d[s[i+j]]+1
            if c==3:
                ans=ans+1
        return ans
        