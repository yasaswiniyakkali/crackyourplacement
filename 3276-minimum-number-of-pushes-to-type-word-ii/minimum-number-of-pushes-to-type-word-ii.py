class Solution:
    def minimumPushes(self, word: str) -> int:
        d={}
        
        for i in word:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        
        l=list(d.values())
        l.sort(reverse=True)
        j=0
        k=1
        s=0
        for i in range(len(l)):
            s=s+l[i]*k
            j+=1
            if j%8==0:
                k+=1
        return s

        