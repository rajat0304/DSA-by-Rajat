class Solution(object):
    def lengthOfLongestSubstring(self, s):

        last = [-1] * 256

        left = 0
        ans = 0

        for right in range(len(s)):

            if last[ord(s[right])] != -1:
                left = max(left, last[ord(s[right])] + 1)

            last[ord(s[right])] = right

            ans = max(ans, right - left + 1)

        return ans
