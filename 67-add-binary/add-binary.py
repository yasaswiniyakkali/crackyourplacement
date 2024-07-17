class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        x=int(a,2)
        y=int(b,2)
        z=bin(x+y)
        return z[2:]