class Solution:
    def isPowerOfTwo(self, n):
        self.one = 1.0
        self.isTrue = False
        if n == 1:
            return True
        self.isPowerOfTwo1(n)
        return self.isTrue
    def isPowerOfTwo1(self,n):
        if (n/2) == self.one:
            self.isTrue = True
            return
        elif (n/2) < self.one:
            return
        self.isPowerOfTwo1(n/2)
        
        
s = Solution()
s.isPowerOfTwo()