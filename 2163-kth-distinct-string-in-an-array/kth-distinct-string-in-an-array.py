class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        l=[]
        d={}
        for i in arr:
            if i not in d:
                d[i]=1
                l.append(i)
            else:
                d[i]=d[i]+1
                if i in l:
                    l.remove(i)
        if len(l)<k:
            return ""
        return l[k-1]

        