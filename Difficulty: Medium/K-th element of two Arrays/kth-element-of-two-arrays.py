#User function Template for python3

class Solution:
    def kthElement(self, k, arr1, arr2):
        n=len(arr1)
        m=len(arr2)
        c=[]
        i=0
        j=0
        while i<=n-1 and j<=m-1:
            if arr1[i]<=arr2[j]:
                c.append(arr1[i])
                i=i+1
            else:
                c.append(arr2[j])
                j=j+1
        while i<=n-1:
            c.append(arr1[i])
            i=i+1
        while j<=m-1:
            c.append(arr2[j])
            j=j+1
            
        return c[k-1]
                
        
        
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while (T > 0):

        k = int(input())
        a = [int(x) for x in input().strip().split()]
        b = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.kthElement(k, a, b))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends