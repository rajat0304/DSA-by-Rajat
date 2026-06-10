class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        left = 0
        n = len(nums)
        right = n - 1
        index = n - 1
        ans = [0] * n
        while left <= right:
            leftsq = nums[left] * nums[left]
            rightsq = nums[right] * nums[right]
            if leftsq > rightsq:
                ans[index] = leftsq
                left += 1
            else:
                ans[index] = rightsq
                right -= 1
            index -= 1
        return ans
