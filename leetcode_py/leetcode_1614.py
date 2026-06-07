class Solution(object):
    def maxDepth(self, s):
        """
        :type s: str
        :rtype: int
        """
        p=0
        ans =0
        for i in s:
            if(i == '('):
                p+=1
            elif(i == ')'):
                p -=1
            ans = max(p,ans)
        return ans
