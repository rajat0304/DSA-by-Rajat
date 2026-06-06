class Solution(object):
    def findKthPositive(self, arr, k):
        """
        :type arr: List[int]
        :type k: int
        :rtype: int
        """
        n = len(arr)
        for i in range(0,n):
            if(arr[i]<=k):
                k +=1
            else:
                break
        return k
        
